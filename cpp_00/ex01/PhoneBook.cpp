/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:50:36 by jschneid          #+#    #+#             */
/*   Updated: 2023/04/19 15:58:05 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/PhoneBook.hpp"
#include "./includes/Contact.hpp"
#include <iostream>
#include <string.h>
#include <iomanip>

static int	search_for_available_space(Contact *contacts);
static void	add_data_to_phone_book(Contact *contacts);
static void	draw_horizontal_line(void);
static void	print_contact_info(Contact *contact, int index);
static void	print_table_headers(void);

void	PhoneBook::search_contact(Contact *contacts)
{
	int	i = 0;
	// int	input;

	print_table_headers();
	// @todo put this while loop in the print_contact_info function
	while(i < 9)
	{
		print_contact_info(&contacts[i], i);
		i++;
	}
	// std::cin >> input;
	// if (input > 0 && input < 9)
	// 	add_data(contacts[input]);
}

void	PhoneBook::add_contact(Contact *contacts)
{
	int	new_contact = search_for_available_space(contacts);
	printf("%d", new_contact);
	add_data_to_phone_book(&contacts[new_contact]);
}

static int	search_for_available_space(Contact *contacts)
{
	int	i = 0;

	while (i < 8)
	{
		if (contacts[i].initialized == false)
			return (i);
		i++;
	}
	return (i);
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
}


static void	draw_horizontal_line(void)
{
	std::cout << "---------------------------------------------" << std::endl;
}

static void	print_contact_info(Contact *contact, int index)
{
	int	field_width = 10;
	std::cout << "|";
	std::cout << std::setw(field_width) << index;
	std::cout << "|";
	std::cout << std::setw(field_width) << contact->last_name;
	std::cout << "|";
	std::cout << std::setw(field_width) << contact->nickname;
	std::cout << "|";
	std::cout << std::setw(field_width) << contact->phone;
	std::cout << "|" << std::endl;
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
