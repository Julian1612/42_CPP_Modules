/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:46:36 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/12 15:31:47 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

// Constructors
Animal::Animal(void)
{
	this->_type = "Animal";
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << std::endl;
}


// Destructor
Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}


// Operators
Animal & Animal::operator=(const Animal &assign)
{
	std::cout << "Animal's copy assignment operator called" << std::endl;
	this->_type = assign.getType();
	return (*this);
}


// Getters / Setters
std::string Animal::getType() const
{
	return (_type);
}

// Member functions
void	Animal::makeSound(void) const
{
	std::cout << this->getType() << ": animal sound" << std::endl;
}
