/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:00:57 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/01 15:30:50 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool replacer(const std::string& file_name, const std::string& arg1, const std::string& arg2)
{
	std::string		line;
	std::string		output_file_name;
	std::ifstream	file(file_name.c_str());

	if (arg1.empty() || arg2.empty())
	{
		std::cout << "Error! One of the arguments is empty!" << std::endl;
		return (1);
	}
	if (!file.is_open())
	{
		std::cout << "Error! Failed to open the file" << std::endl;
		return (false);
	}
	output_file_name.append(file_name);
	output_file_name.append(".replace");
	std::ofstream output_file(output_file_name.c_str());
	while (std::getline(file, line))
	{
		if (line.find(arg1) != std::string::npos)
		{
			size_t	pos = 0;
			while ((pos = line.find(arg1, pos)) != std::string::npos)
			{
				line.erase(pos, arg1.length());
				line.insert(pos, arg2);
				pos += arg2.length();
			}
		}
		output_file << line << std::endl;
	}
	file.close();
	output_file.close();
	return (true);
}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "Error! The number of arguments is wrong" << std::endl;
		return 1;
	}
	if (replacer(argv[1], argv[2], argv[3]))
		return 1;
	return 0;
}
