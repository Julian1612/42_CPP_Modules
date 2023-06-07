/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:54:49 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/07 10:15:28 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"

#include <iostream>

int main (void) {
	ScavTrap anonymous;
	ScavTrap princessBubblegum("Princess Bubblegum");
	int i = -1;

	std::cout << "\n*--FIGHT!--*\n" << std::endl;
	princessBubblegum.attack( "Something");
	princessBubblegum.beRepaired(10);
	princessBubblegum.takeDamage(10);
	princessBubblegum.guardGate();
	anonymous.attack ("something");
	anonymous.attack ("a wall");
	anonymous.beRepaired(10);
	anonymous.beRepaired(15);
	anonymous.takeDamage(20);
	anonymous.takeDamage(100);
	anonymous.guardGate();

	std::cout << "\n*--Repair test!--*\n" << std::endl;

	ScavTrap colonelWobblebottom("Colonel Wobblebottom");

	while (++i < 50)
		colonelWobblebottom.attack("a Tree");
	colonelWobblebottom.beRepaired(10);
	colonelWobblebottom.attack("door");

	std::cout << "\n*--Death test!--*\n" << std::endl;

	ScavTrap missWhimsyWhiskers("Miss Whimsy Whiskers");

	missWhimsyWhiskers.takeDamage(100);
	missWhimsyWhiskers.takeDamage(10);
	missWhimsyWhiskers.beRepaired(10);
	missWhimsyWhiskers.attack("Doctor Snickerdoodle");

	std::cout << std::endl;

	return (0);
}
