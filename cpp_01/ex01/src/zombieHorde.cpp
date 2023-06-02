/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:36:37 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/02 10:25:59 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

// Member functions
void	Zombie::setZombieName(std::string name) {
	this->m_name = name;
	return ;
}

// Utility function
Zombie* zombieHorde(int N, std::string name) {
	if (N < 1)
		return (NULL);
	Zombie* Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		Horde[i].setZombieName(name);
	return (Horde);
}
