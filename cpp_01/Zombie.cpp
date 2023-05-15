/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:39:33 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/15 10:36:58 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

Zombie::~Zombie()
{
	std::cout << this->m_name << " died" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->m_name = name;
}

void	Zombie::announce()
{
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
