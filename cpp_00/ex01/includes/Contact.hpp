/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:47:20 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/31 12:22:05 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
	private:
		std::string	firstName_;
		std::string	lastName_;
		std::string	nickname_;
		std::string	phone_;
		std::string	secret_;
	public:
		Contact();
		// ~Contact();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getPhone();
		std::string	getSecret();
		void		add_first_name();
		void		add_last_name();
		void		add_nickname();
		void		add_phone();
		void		add_secret();
		bool		initialized;
	private:
};

#endif
