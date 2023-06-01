/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:32:22 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/01 11:06:14 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanB.h"

HumanB::HumanB(std::string name): m_name(name), m_weapon(NULL) {
	return ;
}

HumanB::~HumanB(void) {
	return	;
}

void	HumanB::attack(void) {
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
