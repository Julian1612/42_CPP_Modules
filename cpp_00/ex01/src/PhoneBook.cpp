/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:50:36 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/24 09:45:26 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <iostream>
#include <string.h>
#include <iomanip>
// @todo remove
#include <stdio.h>

static int search_for_available_index(Contact *contacts);
static int print_contact_info(Contact *contact);
static void print_table_headers(void);
void print_short_version(std::string str);
void display_contact(Contact *contact);


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
	std::cout << "\nPress enter to safe contact" << std::endl;
}

void PhoneBook::search_contact()
{
	int			input;
	int			printed_contacts = print_contact_info(contacts);
	bool		check = false;

	while(!std::cin.eof() && check == false)
	{
		std::cin.clear();
		std::cout << "Select contact index: ";
		std::cin >> input;
		if ((input > 0 && input < 9)
			&& input <= printed_contacts)
		{
			display_contact(&contacts[input - 1]);
			check = true;
		}
		else
		{
			std::cin.clear();
			std::cout << "Input is invalid" << std::endl;
			check = true;
			return ;
		}
	}

}

static int search_for_available_index(Contact *contacts)
{
	int i = 0;
	static int oldest_contact = -1;

	if (oldest_contact == 7)
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
	while (i < 8 && contact[i].initialized == true)
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
