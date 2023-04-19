/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:35:55 by jschneid          #+#    #+#             */
/*   Updated: 2023/04/19 11:49:29 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/Contact.hpp"
#include "./includes/PhoneBook.hpp"

void	print_prompt(void)
{
	std::cout << " _____  _                        _                 _" << std::endl;
	std::cout << "|  __ \\| |                      | |               | |" << std::endl;
	std::cout << "| |__) | |__   ___  _ __   ___  | |__   ___   ___ | |" << std::endl;
	std::cout << "|  ___/| '_ \\ / _ \\| '_ \\ / _ \\ | '_ \\ / _ \\ / _ \\| |/ /" << std::endl;
	std::cout << "| |    | | | | (_) | | | |  __/ | |_) | (_) | (_) |   <" << std::endl;
	std::cout << "|_|    |_| |_|\\___/|_| |_|\\___| |_.__/ \\___/ \\___/|_|\\_\\" << std::endl;
	std::cout << "What would you like to do?" << std::endl;
	std::cout << "To add a new contact, please enter: ADD." << std::endl;
	std::cout << "To search for a contact, please enter: SEARCH." << std::endl;
	std::cout << "To exit the phone book, please enter: EXIT." << std::endl;
}

int	main(void)
{
	Contact		contacts[8];
	PhoneBook	phonebook;
	std::string	input;

	phonebook.exit_code = true;
	while(phonebook.exit_code)
	{
		print_prompt();
		std::cin >> input;
		std::cout << input << std::endl;
	}

	return (0);
}
