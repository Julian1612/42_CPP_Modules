/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:32:11 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/02 10:33:19 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "HumanA.h"
#include "Weapon.h"

// Constructor
HumanA::HumanA(std::string name, Weapon& weapon) : m_name(name), m_weapon(weapon) {
	return ;
}

// Destructor
HumanA::~HumanA(void) {
	return ;
}

// Member functions
void	HumanA::attack(void) const {
	std::cout << this->m_name << " attacks with their " << this->m_weapon.getType() << std::endl;
}
