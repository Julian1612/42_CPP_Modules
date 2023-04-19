/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:35:55 by jschneid          #+#    #+#             */
/*   Updated: 2023/04/19 20:38:19 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <iomanip>
#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include <stdio.h>

static void	print_prompt(void);

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	phonebook.exit_code = true;
	while(phonebook.exit_code)
	{
		print_prompt();
		std::cin >> input;
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else if (input == "EXIT")
			phonebook.exit_code = false;
	}
	return (0);
}

static void	print_prompt(void)
{
	std::cout << " _____  _                        _                 _" << std::endl;
	std::cout << "|  __ \\| |                      | |               | |" << std::endl;
	std::cout << "| |__) | |__   ___  _ __   ___  | |__   ___   ___ | |" << std::endl;
	std::cout << "|  ___/| '_ \\ / _ \\| '_ \\ / _ \\ | '_ \\ / _ \\ / _ \\| |/ /" << std::endl;
	std::cout << "| |    | | | | (_) | | | |  __/ | |_) | (_) | (_) |   <" << std::endl;
	std::cout << "|_|    |_| |_|\\___/|_| |_|\\___| |_.__/ \\___/ \\___/|_|\\_\\" << std::endl;
	std::cout << "\n";
    std::cout << "Welcome to the Phone Book!" << std::endl;
    std::cout << "Please enter one of the following options:" << std::endl;
    std::cout << "- To add a new contact, enter 'ADD'." << std::endl;
    std::cout << "- To search for a contact, enter 'SEARCH'." << std::endl;
    std::cout << "- To exit the phone book, enter 'EXIT'." << std::endl;
    std::cout << "Your input should be all uppercase." << std::endl;
    std::cout << "Enter, what would you like to do: ";
}
