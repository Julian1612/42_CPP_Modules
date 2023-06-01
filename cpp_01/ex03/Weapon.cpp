/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:32:37 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/01 11:08:22 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.h"

Weapon::Weapon(std::string weapon): m_type(weapon) {
	return ;
}

Weapon::~Weapon(void) {
	return ;
}

const std::string	&Weapon::getType() const {
	return (this->m_type);
}

void	Weapon::setType(std::string	newType) {
	this->m_type = newType;
	return ;
}
