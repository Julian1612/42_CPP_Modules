/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:51:09 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/31 12:16:42 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include <string.h>

Contact::Contact()
{
	initialized = false;
};

void	Contact::add_first_name()
{
	std::string	input;
	bool		check;

	check = false;
	while(!std::cin.eof() && check == false)
	{
		std::cin.clear();
		std::cout << "First name    : ";
		std::getline(std::cin, input);
		if ((input.find(" ") > input.size()) && input.find('\t')
			&& !input.empty())
		{
			check = true;
			firstName_ = input;
		}
		else
			std::cout << "Input is invalid, please try again" << std::endl;
	}
}

void	Contact::add_last_name()
{
	std::string	input;
	bool		check;

	check = false;
	while(!std::cin.eof() && check == false)
	{
		std::cin.clear();
		std::cout << "Last name     : ";
		std::getline(std::cin, input);
		std::size_t found = input.find(" ");
		if (found > input.size() && input.find("	")
			&& !input.empty())
		{
			check = true;
			lastName_ = input;
		}
		else
			std::cout << "Input is invalid, please try again" << std::endl;
	}
}

void	Contact::add_nickname()
{
	std::string	input;
	bool		check;

	check = false;
	while(!std::cin.eof() && check == false)
	{
		std::cin.clear();
		std::cout << "Nickname      : ";
		std::getline(std::cin, input);
		if (input.find(" ") > input.size() && input.find("	")
			&& !input.empty())
		{
			check = true;
			nickname_ = input;
		}
		else
			std::cout << "Input is invalid, please try again" << std::endl;
	}
}

bool	is_all_digit(std::string str)
{
	int	i = 0;

	while(str[i])
	{
		if(str[i] < '0' || str[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

void	Contact::add_phone()
{
	std::string	input;
	bool		check;

	check = false;
	while(!std::cin.eof() && check == false)
	{
		std::cin.clear();
		std::cout << "Phone         : ";
		std::getline(std::cin, input);
		if (is_all_digit(input) == true  && input.find("	")
			&& !input.empty())
		{
			check = true;
			phone_ = input;
		}
		else
			std::cout << "Only numbers, please try again" << std::endl;
	}
}

void	Contact::add_secret()
{
	std::string	input;
	bool		check;

	check = false;
	while(!std::cin.eof() && check == false)
	{
		std::cin.clear();
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, input);
		if (!input.empty())
		{
			check = true;
			secret_ = input;
		}
		else
			std::cout << "Input is invalid, please try again" << std::endl;
	}
}

std::string	Contact::getFirstName(void)
{
	return(firstName_);
}

std::string	Contact::getLastName(void)
{
	return(lastName_);
}

std::string	Contact::getNickname(void)
{
	return(nickname_);
}

std::string	Contact::getPhone(void)
{
	return(phone_);
}

std::string	Contact::getSecret(void)
{
	return(secret_);
}
