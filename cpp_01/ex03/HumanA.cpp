/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:32:11 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/15 17:48:18 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.h"
#include "Weapon.h"

HumanA::HumanA( std::string name, Weapon& weapon ) : m_name(name), m_weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack() const
{
	if (this->m_weapon.getType() != "") // @todo find a other way to check this
		std::cout << this->m_name << " attacks with their " << this->m_weapon.getType() << std::endl;
	else
		std::cout << this->m_name << " attacks with his fists." << std::endl;
}
