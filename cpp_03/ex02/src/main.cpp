/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:54:49 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/07 10:14:53 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

#include <iostream>

int main( void )
{
	FragTrap Default;
	FragTrap SirClumsyMcFumble("Sir Clumsy McFumble");
	FragTrap defultCpy(Default);
	int i = -1;

	std::cout << "\n*--FIGHT!--*\n" << std::endl;
	Default.attack("Lady Silly Socks");
	Default.beRepaired(10);
	Default.takeDamage(10);
	Default.takeDamage(5);
	Default.highFivesGuys();
	SirClumsyMcFumble.attack("Major Bumblebee");
	SirClumsyMcFumble.beRepaired(10);
	SirClumsyMcFumble.takeDamage(10);
	SirClumsyMcFumble.highFivesGuys();
	defultCpy.attack("Princess Bubblegum");
	defultCpy.beRepaired(10);
	defultCpy.takeDamage(10);
	defultCpy.highFivesGuys();

	std::cout << "\n*--Repair test!--*\n" << std::endl;
	FragTrap enemy("Duke Noodlebrain");

	while (++i < 100)
		enemy.attack("a Confetti Cannon" );
	enemy.beRepaired(10);
	enemy.attack("Colonel Wobblebottom");

	std::cout << "\n*--Death test!--*\n" << std::endl;
	FragTrap missWhimsyWhiskers("Miss Whimsy Whiskers");

	missWhimsyWhiskers.takeDamage(100);
	missWhimsyWhiskers.takeDamage(10);
	missWhimsyWhiskers.beRepaired(10);
	missWhimsyWhiskers.attack("Doctor Snickerdoodle");
	std::cout << std::endl;
	return (0);
}
