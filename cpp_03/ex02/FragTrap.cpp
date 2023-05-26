/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:24:12 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/26 11:10:38 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.h"
#include "FragTrap.h"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->name = "FragDefault";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string input_name) : ClapTrap(input_name)
{
	this->name = input_name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "FragTrap user-defined constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& obj) : ClapTrap(obj)
{
	*this = obj;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
	this->name = obj.name;
	this->hit_points = obj.hit_points;
	this->attack_damage = obj.attack_damage;
	this->energy_points = obj.energy_points;
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High five, mate 🖐️" << std::endl;
}
