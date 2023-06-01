/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:36:52 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/01 10:16:23 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"
#include <cstdlib>

int main(void)
{
	Zombie* Horde;
	std::string ZombiesName = "Morty";
	int number_of_zombies = 50;

	Horde = zombieHorde(number_of_zombies, ZombiesName);
	for (int i = 0; i < number_of_zombies; i++)
		Horde[i].announce();
	delete[] Horde;
	return (0);
}
