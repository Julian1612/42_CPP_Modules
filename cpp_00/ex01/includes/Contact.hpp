/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:47:20 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/09 11:47:17 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
	public:
		bool		initialized;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone;
		std::string	secret;
		Contact();
		void	add_first_name();
		void	add_last_name();
		void	add_nickname();
		void	add_phone();
		void	add_secret();
};

#endif
