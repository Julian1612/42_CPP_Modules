/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:54:49 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/07 10:09:04 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main( void )
{
	ClapTrap Default;
	ClapTrap SirClumsyMcFumble("Sir Clumsy McFumble");
	int i = -1;

	std::cout << "\n*--FIGHT!--*\n" << std::endl;
	SirClumsyMcFumble.attack("Default");
	Default.takeDamage(5);
	Default.attack("SirClumsyMcFumble");
	SirClumsyMcFumble.takeDamage(5);
	Default.beRepaired(4294967295);
	Default.beRepaired(10);
	SirClumsyMcFumble.attack("Default");
	Default.takeDamage(5);
	SirClumsyMcFumble.attack("Default");
	Default.takeDamage(5);
	Default.beRepaired(10);
	SirClumsyMcFumble.attack("Default");
	Default.takeDamage(5);
	SirClumsyMcFumble.attack("Default");
	Default.takeDamage(5);
	Default.beRepaired(10);

	std::cout << "\n*--Repair test!--*\n" << std::endl;
	ClapTrap NoEnergy("Bob");

	while (++i < 10)
		NoEnergy.attack("a Tree");
	NoEnergy.beRepaired(10);
	NoEnergy.attack("door");

	std::cout << "\n*--Death test!--*\n" << std::endl;
	ClapTrap Dead("clown");

	Dead.takeDamage(100);
	Dead.takeDamage(10);
	Dead.beRepaired(10);
	Dead.attack("someone");

	std::cout << std::endl;

	return (0);
}
