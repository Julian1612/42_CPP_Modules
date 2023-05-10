/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:50:36 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/10 18:53:41 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <iostream>
#include <string.h>
#include <iomanip>
// @todo remove
#include <stdio.h>

static int search_for_available_index(Contact *contacts)
{
	int i = 0;
	static int oldest_contact = -1;

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

void PhoneBook::add_contact()
{
	int			i = 0;
	int			i_contact = search_for_available_index(contacts);

	while(i < 5)
	{
		if (i == 0)
			contacts[i_contact].add_first_name();
		else if (i == 1)
			contacts[i_contact].add_last_name();
		else if (i == 2)
			contacts[i_contact].add_nickname();
		else if (i == 3)
			contacts[i_contact].add_phone();
		else if (i == 4)
			contacts[i_contact].add_secret();
		i++;
	}
	contacts[i_contact].initialized = true;
}

void display_contact(Contact *contact)
{
	std::cout << "First name:     " << contact->first_name << std::endl;
	std::cout << "Last name:      " << contact->last_name << std::endl;
	std::cout << "Nickname:       " << contact->nickname << std::endl;
	std::cout << "Phone number:   " << contact->phone << std::endl;
	std::cout << "Darkest secret: " << contact->secret << std::endl;
}

void print_short_version(std::string str)
{
	str.resize(9);
	std::cout << str;
	std::cout << '.';
}

static void print_table_headers(void)
{
	int field_width = 10;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|";
	std::cout << std::setw(field_width) << "Index";
	std::cout << "|";
	std::cout << std::setw(field_width) << "First name";
	std::cout << "|";
	std::cout << std::setw(field_width) << "Last name";
	std::cout << "|";
	std::cout << std::setw(field_width) << "Nickname";
	std::cout << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

static int print_contact_info(Contact *contact)
{
	int i = 0;
	int field_width = 10;

	print_table_headers();
	while (i < 9 && contact[i].initialized == true)
	{
		std::cout << "|";
		std::cout << std::setw(field_width) << i + 1;
		std::cout << "|";
		if (contact[i].first_name.length() > 10)
			print_short_version(contact[i].first_name);
		else
			std::cout << std::setw(field_width) << contact[i].first_name;
		std::cout << "|";
		if (contact[i].last_name.length() > 10)
			print_short_version(contact[i].last_name);
		else
			std::cout << std::setw(field_width) << contact[i].last_name;
		std::cout << "|";
		if (contact[i].nickname.length() > 10)
			print_short_version(contact[i].nickname);
		else
			std::cout << std::setw(field_width) << contact[i].nickname;
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	return (i);
}


void PhoneBook::search_contact()
{
	bool		check = false;
	std::string	input_str;
	int			printed_contacts = print_contact_info(contacts);

	while(!std::cin.eof() && check == false)
	{
		std::cin.clear();
		std::cout << "Chose a contact from the index, type EXIT to leave: ";
		std::getline(std::cin, input_str);
		if (!input_str.compare("EXIT"))
			check = true;
		else if ((!input_str.compare("1") || !input_str.compare("2")
					|| !input_str.compare("3") || !input_str.compare("4")
					|| !input_str.compare("5") || !input_str.compare("6")
					|| !input_str.compare("7") || !input_str.compare("8"))
					&& std::stoi(input_str) <= printed_contacts)
			display_contact(&contacts[std::stoi(input_str) - 1]);
		else
			std::cout << "Input is invalid, please try again" << std::endl;
	}
}
