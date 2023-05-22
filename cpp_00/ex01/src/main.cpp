/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:35:55 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/22 17:42:57 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <iomanip>
#include <limits>
#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include <stdio.h>

// DONE:
// @todo when doing search: Display the saved contacts as a list of 4 columns: index, first name...
// @todo control + c && control + d
// @todo check if phonenbr is all digit when adding the phonenbr to phonebook
// @todo handle bigger and smaller numbers then index. only show safed contacts
// @todo handle as an error when the line is empty and return is pressed as input
// @todo check if string is empty .empty()
// TO-DO:
// @todo if there is a tab in the input string form the ADD function its a invalid input
// @todo add constructor and deconstructor for every class

static void	print_prompt(void);

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	phonebook.exit_code = true;
	print_prompt();
	while(phonebook.exit_code && !std::cin.eof())
	{
		std::cout << "Enter, what you would like to do: ";
		std::cin.clear();
		std::getline(std::cin, input);
		if (!input.compare("a"))
			phonebook.add_contact();
		else if (!input.compare("s"))
			phonebook.search_contact();
		else if (!input.compare("e"))
			phonebook.exit_code = false;
		else
			std::cout << "Please enter a valid command" << std::endl;
	}
	return (0);
}

static void	print_prompt(void)
{
	std::cout << " _____  _                        _                 _" << std::endl;
	std::cout << "|  __ \\| |                      | |               | |" << std::endl;
	std::cout << "| |__) | |__   ___  _ __   ___  | |__   ___   ___ | | __" << std::endl;
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
}
