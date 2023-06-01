/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:36:43 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/01 10:33:23 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

Zombie::Zombie(void) {
	return	;
}

Zombie::Zombie(std::string name) {
	this->m_name = name;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << this->m_name << " died" << std::endl;
	return ;
}


void	Zombie::announce(void) {
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
