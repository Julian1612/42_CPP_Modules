/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:36:52 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/02 10:21:51 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"
#include <cstdlib>

int main(void)
{
	int			nbrOfZombies01 = 50;
	int			nbrOfZombies02 = 0;
	int			nbrOfZombies03 = 1;
	int			nbrOfZombies04 = -1;
	Zombie*		Horde01;
	Zombie*		Horde02;
	Zombie*		Horde03;
	Zombie*		Horde04;
	std::string	ZombieName01 = "Morty";
	std::string	ZombieName02 = "Frank";
	std::string	ZombieName03 = "Dave";
	std::string	ZombieName04 = "Bart";

	Horde01 = zombieHorde(nbrOfZombies01, ZombieName01);
	Horde02 = zombieHorde(nbrOfZombies02, ZombieName02);
	Horde03 = zombieHorde(nbrOfZombies03, ZombieName03);
	Horde04 = zombieHorde(nbrOfZombies04, ZombieName04);
	for (int i = 0; i < nbrOfZombies01; i++)
		Horde01[i].announce();
	for (int i = 0; i < nbrOfZombies02; i++)
		Horde02[i].announce();
	for (int i = 0; i < nbrOfZombies03; i++)
		Horde03[i].announce();
	for (int i = 0; i < nbrOfZombies04; i++)
		Horde04[i].announce();
	delete[] Horde01;
	delete[] Horde02;
	delete[] Horde03;
	delete[] Horde04;
	return (0);
}
