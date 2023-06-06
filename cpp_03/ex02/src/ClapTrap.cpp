/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:22:34 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/06 10:55:47 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include <iostream>
#include <string>
#define MAXNBR 429496729
// @todo make a copy constructor

// Constructor
ClapTrap::ClapTrap(void) {
	this->name = "Default";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string input_name) {
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	this->name = input_name;
	std::cout << this->name << " is spawned" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &obj ) {
	*this = obj;
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

// Destructor
ClapTrap::~ClapTrap() {
	std::cout << this->name << " is destroyed" << std::endl;
}

// Operators
ClapTrap &ClapTrap::operator=( ClapTrap const &instance) {
	this->name = instance.name;
	this->hit_points = instance.hit_points;
	this->attack_damage = instance.attack_damage;
	this->energy_points = instance.energy_points;
	return (*this);
}

// Member functions
void	ClapTrap::attack(const std::string& target) {
	if (this->energy_points == 0)
		std::cout << "ClapTrap " << this->name << " has no energy to attack" << std::endl;
	else if (this->hit_points == 0)
		std::cout << "ClapTrap " << this->name << " has no hit points left" << std::endl;
	else
	{
		this->energy_points--;
		std::cout << "During the intense battle, ClapTrap " << this->name;
		std::cout << " delivered a significant blow to " << target;
		std::cout << ", inflicting " << this->attack_damage;
		std::cout << " points of damage with their relentless attack." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name;
	std::cout << " finds themselves under attack, sustaining ";
	std::cout << amount << " points of damage from the assailant's strike." << std::endl;
	if (amount > this->hit_points)
		this->hit_points = 0;
	else
		this->hit_points -= amount;
	if (this->hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " died!" << std::endl;
		this->hit_points = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	long long	ref = amount;

	if ((ref + amount) > MAXNBR)
	{
		unsigned int i = MAXNBR - this->hit_points;
		this->hit_points = MAXNBR;
		std::cout << "ClapTrap " << this->name;
		std::cout << " undergoes repairs, resulting in a win of ";
		std::cout << i << " hit points." << std::endl;
		std::cout << "ClapTrap " << this->name << " has max health!" << std::endl;
		return ;
	}
	if (this->hit_points == 0)
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
	else if (this->energy_points == 0)
		std::cout << "ClapTrap " << this->name << " has no energy points left to repair him self" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name;
		std::cout << " undergoes repairs, resulting in a win of ";
		std::cout << amount << " hit points." << std::endl;
	}
}
