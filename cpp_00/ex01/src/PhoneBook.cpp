/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:50:36 by jschneid          #+#    #+#             */
/*   Updated: 2023/04/26 18:29:43 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <iostream>
#include <string.h>
#include <iomanip>
// @todo remove
#include <stdio.h>

static int search_for_available_space(Contact *contacts);
// static void add_data_to_phone_book(Contact *contacts);
static void print_contact_info(Contact *contact);
static void print_table_headers(void);

void display_contact(Contact *contact)
{
	std::cout << "First name:     " << contact->first_name << std::endl;
	std::cout << "Last name:      " << contact->last_name << std::endl;
	std::cout << "Nickname:       " << contact->nickname << std::endl;
	std::cout << "Phone number:   " << contact->phone << std::endl;
	std::cout << "Darkest secret: " << contact->secret << std::endl;
}

void PhoneBook::search_contact()
{
	int input_int;
	std::string input_str;

	print_contact_info(contacts);
	std::cout << "Chose a contact from 1 to 8, exit with E: ";
	std::cin >> input_int;
	if (input_int > 0 && input_int < 9)
		display_contact(&contacts[input_int - 1]);
	else
	{
		std::cin.clear();
		std::cerr << "Invalid input. Please enter a number from 1 to 8 or E.\n"; //@todo E als input handlen
		return;
	}
	std::cout << "Enter a key to return to main menu" << std::endl;
	std::cin >> input_str;
	if (input_str == "RETURN")
		return;
}

void add_name_data(std::string cmd, Contact *contact, int flag)
{
	std::string line;

	std::cout << cmd;
	std::getline(std::cin, line);
	while(!std::cin.eof())
	{
		std::cin.clear();
		std::cout << cmd;
		std::getline(std::cin, line);
		if (flag == 1 || flag == 2)
			contact->first_name = line;
		else if (flag == 3)
			contact->nickname = line;
	}

	// while (i < 5)
	// {
	// 	std::string line;
	// 	std::cout << prompt[i];
	// 	std::getline(std::cin, line);
	// 	if (std::cin.eof())
	// 		break;
	// 	if (!line.empty())
	// 	{
	// 		if (i == 0)
	// 		{

	// 			contacts->first_name = line;
	// 		}
	// 		else if (i == 1)
	// 			contacts->last_name = line;
	// 		else if (i == 2)
	// 			contacts->nickname = line;
	// 		else if (i == 3)
	// 		{
	// 			if (is_digit(line))
	// 				contacts->phone = line;
	// 			else
	// 			{
	// 				std::cout << "PLEASE ENTER ONLY DIGITS!" << std::endl;
	// 				continue;
	// 			}
	// 		}
	// 		else if (i == 4)
	// 			contacts->secret = line;
	// 		i++;
	// 	}
	// }

}

// void add_phone_data(std::string cmd, Contact *contact)
// {

// }

// void add_secret_data()

void PhoneBook::add_contact()
{
	int new_contact = search_for_available_space(contacts);

	add_name_data("Please enter the first name: ", &contacts[new_contact], 1);
	add_name_data("Please enter the last name: ", &contacts[new_contact], 2);
	add_name_data("Please enter the nickname: ", &contacts[new_contact], 3);
	// add_phone_data("Please enter the phone number: ", contacts);
	// add_secret_data("Please enter the phone number: ", contacts);
	contacts[new_contact].initialized = true;
}

// static void add_data_to_phone_book(Contact *contacts)
// {
// 	std::string prompt[5] =
// 	{
// 		"Please enter the first name: ",
// 		"Please enter the last name: ",
// 		"Please enter the nickname: ",
// 		"Please enter the phone number: ",
// 		"Please enter your darkest secret: ",
// 	};
// 	int i = 0;
// 	while (i < 5)
// 	{
// 		std::string line;
// 		std::cout << prompt[i];
// 		std::getline(std::cin, line);
// 		if (std::cin.eof())
// 			break;
// 		if (!line.empty())
// 		{
// 			if (i == 0)
// 			{

// 				contacts->first_name = line;
// 			}
// 			else if (i == 1)
// 				contacts->last_name = line;
// 			else if (i == 2)
// 				contacts->nickname = line;
// 			else if (i == 3)
// 			{
// 				if (is_digit(line))
// 					contacts->phone = line;
// 				else
// 				{
// 					std::cout << "PLEASE ENTER ONLY DIGITS!" << std::endl;
// 					continue;
// 				}
// 			}
// 			else if (i == 4)
// 				contacts->secret = line;
// 			i++;
// 		}
// 	}
// 	contacts->initialized = true;
// }

static int search_for_available_space(Contact *contacts)
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

bool is_digit(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

void print_short_version(std::string str)
{
	str.resize(9);
	std::cout << str;
	std::cout << '.';
}

static void print_contact_info(Contact *contact)
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
