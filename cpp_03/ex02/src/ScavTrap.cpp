/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:37:24 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/06 10:57:02 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.h"
#include "ScavTrap.h"

// Constructor
ScavTrap::ScavTrap(void) : ClapTrap() {
	this->name = "ScavDefault";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string input_name) : ClapTrap(input_name) {
	this->name = input_name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap user-defined constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& obj) : ClapTrap(obj) {
	*this = obj;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

// Destructor
ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

// Operator
ScavTrap &ScavTrap::operator=(ScavTrap const &instance) {
	this->name = instance.name;
	this->hit_points = instance.hit_points;
	this->attack_damage = instance.attack_damage;
	this->energy_points = instance.energy_points;
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	return (*this);
}

// Member functions
void	ScavTrap::attack(const std::string& target) {
	if (this->energy_points == 0)
		std::cout << "ScavTrap " << this->name << " has no energy to attack" << std::endl;
	else if (this->hit_points == 0)
		std::cout << "ScavTrap " << this->name << " has no hit points left" << std::endl;
	else
	{
		this->energy_points--;
		std::cout << "During the intense battle, ScavTrap " << this->name;
		std::cout << " delivered a significant blow to " << target;
		std::cout << ", inflicting " << this->attack_damage;
		std::cout << " points of damage with their relentless attack." << std::endl;
	}
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->name <<  " is now in Gatekeeper mode!" << std::endl;
}
