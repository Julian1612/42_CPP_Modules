/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:50:36 by jschneid          #+#    #+#             */
/*   Updated: 2023/04/19 20:37:26 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <iostream>
#include <string.h>
#include <iomanip>
// @todo remove
#include <stdio.h>

static int	search_for_available_space(Contact *contacts);
static void	add_data_to_phone_book(Contact *contacts);
static void	draw_horizontal_line(void);
static void	print_contact_info(Contact *contact);
static void	print_table_headers(void);

void	display_contact(Contact *contact)
{
	std::cout << "First name:     " << contact->first_name << std::endl;
	std::cout << "Last name:      " << contact->last_name << std::endl;
	std::cout << "Nickname:       " << contact->nickname << std::endl;
	std::cout << "Phone number:   " << contact->phone << std::endl;
	std::cout << "Darkest secret: " << contact->secret << std::endl;
}

void	PhoneBook::search_contact()
{
	int			input_int;
	std::string	input_str;

	print_contact_info(contacts);
	std::cout << "Chose a contact from 1 to 8, exit with E: ";
	std::cin >> input_int;
	if (input_int > 0 && input_int < 9)
		display_contact(&contacts[input_int - 1]);
	else
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //@todo look how this works
		std::cerr << "Invalid input. Please enter a number from 1 to 8 or E.\n"; //@todo E als input handlen
		return ;
	}
	std::cin >> input_str;
	std::cout << "Enter 'RETURN' to return to main menu" << std::endl;
	if (input_str == "RETURN")
		return ;
}

void	PhoneBook::add_contact()
{
	int	new_contact = search_for_available_space(contacts);
	add_data_to_phone_book(&contacts[new_contact]);
}

static int	search_for_available_space(Contact *contacts)
{
	int			i = 0;
	static int	oldest_contact = -1;

	if (oldest_contact == 8)
		oldest_contact = -1;
	while (i < 8)
	{
		if (contacts[i].initialized == false)
			return (i);
		i++;
	}
	oldest_contact++;
	return (oldest_contact);
}


static void	add_data_to_phone_book(Contact *contacts)
{
	std::cout << "Please enter the first name: ";
	std::cin >> contacts->first_name;
	std::cout << "Please enter the last name: ";
	std::cin >> contacts->last_name;
	std::cout << "Please enter the nickname: ";
	std::cin >> contacts->nickname;
	std::cout << "Please enter the phone number: ";
	std::cin >> contacts->phone;
	std::cout << "Please enter your darkest secret: ";
	std::cin >> contacts->secret;
	contacts->initialized = true;
}


static void	draw_horizontal_line(void)
{
	std::cout << "---------------------------------------------" << std::endl;
}

void	print_short_version(std::string str)
{
	while(str.length() > 9)
		str.pop_back();
	str.append(".");
	std::cout << str;
}

static void	print_contact_info(Contact *contact)
{
	int	i = 1;
	int	field_width = 10;

	print_table_headers();
	while(i < 9)
	{
		std::cout << "|";
		std::cout << std::setw(field_width) << i;
		std::cout << "|";
		if (contact[i - 1].first_name.length() > 10)
			print_short_version(contact[i - 1].first_name);
		else
			std::cout << std::setw(field_width) << contact[i - 1].first_name;
		std::cout << "|";
		if (contact[i - 1].last_name.length() > 10)
			print_short_version(contact[i - 1].last_name);
		else
			std::cout << std::setw(field_width) << contact[i - 1].last_name;
		std::cout << "|";
		if (contact[i - 1].nickname.length() > 10)
			print_short_version(contact[i - 1].nickname);
		else
			std::cout << std::setw(field_width) << contact[i - 1].nickname;
		std::cout << "|" << std::endl;
		i++;
	}
	draw_horizontal_line();
}

static void	print_table_headers(void)
{
	int	field_width = 10;

	draw_horizontal_line();
	std::cout << "|";
	std::cout << std::setw(field_width) << "Index";
	std::cout << "|";
	std::cout << std::setw(field_width) << "First name";
	std::cout  << "|";
	std::cout << std::setw(field_width) << "Last name";
	std::cout << "|";
	std::cout << std::setw(field_width) << "Nickname";
	std::cout << "|" << std::endl;
	draw_horizontal_line();
}
