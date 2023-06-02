/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:32:22 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/02 10:43:55 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanB.h"

// Constructor
HumanB::HumanB(std::string name): m_name(name), m_weapon(NULL) {
	return ;
}

// Destructor
HumanB::~HumanB(void) {
	return	;
}

// Member functions
void	HumanB::attack(void) const{
	if (this->m_weapon != NULL)
		std::cout << this->m_name << " attacks with their " << this->m_weapon->getType() << std::endl;
	else
		std::cout << this->m_name << " attacks with his fists." << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->m_weapon = &weapon;
	return ;
}
