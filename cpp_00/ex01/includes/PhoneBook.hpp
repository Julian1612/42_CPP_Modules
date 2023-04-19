/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:46:22 by jschneid          #+#    #+#             */
/*   Updated: 2023/04/19 11:32:30 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>

class PhoneBook
{
	public:
		bool	exit_code;
		void	add_contact();
		void	search_contact();
		void	exit_program();
};

#endif
