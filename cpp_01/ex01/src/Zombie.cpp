/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:36:43 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/15 12:50:00 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

Zombie::~Zombie()
{
	std::cout << this->m_name << " died" << std::endl;
}

Zombie::Zombie()
{
	return	;
}

void	Zombie::announce()
{
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
