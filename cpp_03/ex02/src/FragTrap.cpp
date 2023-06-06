/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:24:12 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/06 16:26:23 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.h"
#include "FragTrap.h"

// Constructor
FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->name = "FragDefault";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(std::string input_name) : ClapTrap(input_name) {
	std::cout << "FragTrap user-defined constructor called" << std::endl;
	this->name = input_name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const& obj) : ClapTrap(obj) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
}

// Destructor
FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->name = obj.name;
	this->hit_points = obj.hit_points;
	this->attack_damage = obj.attack_damage;
	this->energy_points = obj.energy_points;
	return (*this);
}

// Member functions
void	FragTrap::highFivesGuys(void) {
	std::cout << "High five, mate 🖐️" << std::endl;
}
