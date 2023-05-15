/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:32:22 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/15 17:58:39 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanB.h"

HumanB::HumanB(std::string name) : m_name(name)
{
	this->m_weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	if (this->m_weapon->getType() != "") // @todo find a other way to check this
		std::cout << this->m_name << " attacks with their " << this->m_weapon->getType() << std::endl;
	else
		std::cout << this->m_name << " attacks with his fists." << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->m_weapon = &weapon;
}
