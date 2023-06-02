/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:39:33 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/02 10:08:47 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

// Constructors
Zombie::Zombie(void) {
	return ;
}

Zombie::Zombie(std::string name) {
	this->m_name = name;
}

// Destructor
Zombie::~Zombie(void) {
	std::cout << this->m_name << " died" << std::endl;
}

// Member functions
void	Zombie::announce(void) {
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
