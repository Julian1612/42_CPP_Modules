/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:39:33 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/01 09:38:46 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name)
{
	this->m_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->m_name << " died" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
