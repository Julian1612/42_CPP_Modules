/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:54:49 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/26 11:01:18 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

#include <iostream>

int main( void )
{
	FragTrap A;
	FragTrap B( "Special" );
	FragTrap C( A );
	int i = -1;

	A.attack( "Tree" );
	A.beRepaired( 10 );
	A.takeDamage( 10 );
	A.highFivesGuys();
	B.attack( "Tree" );
	B.beRepaired( 10 );
	B.takeDamage( 10 );
	B.highFivesGuys();
	C.attack( "Tree" );
	C.beRepaired( 10 );
	C.takeDamage( 10 );
	C.highFivesGuys();

	std::cout << "\nEnergy test!\n" << std::endl;

	FragTrap NoEnergy( "Bob" );

	while (++i < 100)
		NoEnergy.attack( "a Tree" );
	NoEnergy.beRepaired( 10 );
	NoEnergy.attack( "door" );

	std::cout << "\nDeath test!\n" << std::endl;

	FragTrap Dead( "clown" );

	Dead.takeDamage( 100 );
	Dead.takeDamage( 10 );
	Dead.beRepaired( 10 );
	Dead.attack( "someone" );

	std::cout << std::endl;
	return (0);
}
