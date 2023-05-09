/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:50:36 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/09 11:48:09 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"
#include <iostream>
#include <string.h>
#include <iomanip>
// @todo remove
#include <stdio.h>

void PhoneBook::add_contact()
{
	int			i = 0;
	Contact		contacts;

	while(i < 5)
	{
		if (i == 0)
			contacts.add_first_name();
		else if (i == 1)
			contacts.add_last_name();
		else if (i == 2)
			contacts.add_nickname();
		else if (i == 3)
			contacts.add_phone();
		else if (i == 4)
			contacts.add_secret();
		i++;
	}
}
