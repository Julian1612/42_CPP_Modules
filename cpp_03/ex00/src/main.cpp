/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:54:49 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/06 15:57:17 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main( void )
{
	ClapTrap Default;
	ClapTrap Killer9000( "Killer9000" );
	int i = -1;

	Killer9000.attack( "Default" );
	Default.takeDamage( 5 );
	Default.attack( "Killer9000" );
	Killer9000.takeDamage( 5 );
	Default.beRepaired( 4294967295 );
	Default.beRepaired( 10 );
	Killer9000.attack( "Default" );
	Default.takeDamage( 5 );
	Killer9000.attack( "Default" );
	Default.takeDamage( 5 );
	Default.beRepaired( 10 );
	Killer9000.attack( "Default" );
	Default.takeDamage( 5 );
	Killer9000.attack( "Default" );
	Default.takeDamage( 5 );
	Default.beRepaired( 10 );

	std::cout << "\nEnergy test!\n" << std::endl;

	ClapTrap NoEnergy( "Bob" );

	while (++i < 10)
		NoEnergy.attack( "a Tree" );
	NoEnergy.beRepaired( 10 );
	NoEnergy.attack( "door" );

	std::cout << "\nDeath test!\n" << std::endl;

	ClapTrap Dead( "clown" );

	Dead.takeDamage( 100 );
	Dead.takeDamage( 10 );
	Dead.beRepaired( 10 );
	Dead.attack( "someone" );

	std::cout << std::endl;

	return (0);
}
