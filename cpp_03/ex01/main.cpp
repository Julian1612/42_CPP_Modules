/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:54:49 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/25 17:34:36 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"

#include <iostream>

int main (void)
{
	ScavTrap nameless;
	ScavTrap scav( "Scav" );
	int i = -1;

	scav.attack( "Something" );
	scav.beRepaired( 10 );
	scav.takeDamage( 10 );
	scav.guardGate();
	nameless.attack ( "something" );
	nameless.attack ( "a wall" );
	nameless.beRepaired( 10 );
	nameless.beRepaired( 15 );
	nameless.takeDamage( 20 );
	nameless.takeDamage( 100 );
	nameless.guardGate();

	std::cout << "\nEnergy test!\n" << std::endl;

	ScavTrap NoEnergy( "Bob" );

	while (++i < 50)
		NoEnergy.attack( "a Tree" );
	NoEnergy.beRepaired( 10 );
	NoEnergy.attack( "door" );

	std::cout << "\nDeath test!\n" << std::endl;

	ScavTrap Dead( "clown" );

	Dead.takeDamage( 100 );
	Dead.takeDamage( 10 );
	Dead.beRepaired( 10 );
	Dead.attack( "someone" );

	std::cout << std::endl;

	return (0);
}
