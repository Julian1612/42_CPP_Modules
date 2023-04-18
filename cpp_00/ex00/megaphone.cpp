/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:34:26 by jschneid          #+#    #+#             */
/*   Updated: 2023/04/18 20:27:40 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	to_uppercase(const std::string str)
{
	int i = 0;

	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			std::cout << static_cast<char>(str[i] - 32);
		else
			std::cout << str[i];
		i++;
	}
}

int	main(int argc, const char *argv[])
{
	int	i = 1;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while(i < argc)
	{
		to_uppercase(argv[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
