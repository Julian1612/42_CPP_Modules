/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:36:37 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/15 12:51:51 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

void	Zombie::setZombieName(std::string name)
{
	this->m_name = name;
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* Horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		Horde[i].setZombieName(name);
	return (Horde);
}
