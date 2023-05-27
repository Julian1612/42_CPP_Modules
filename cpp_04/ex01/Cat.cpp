/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:43:19 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/26 16:18:10 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat(void)
{
	this->_type = "🐈";
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	this->_type = assign.getType();
	std::cout << "Cat's copy assignment operator called" << std::endl;
	return (*this);
}

// Getters / Setters
std::string Cat::getType() const
{
	return (_type);
}


// Member functions
void	Cat::makeSound(void) const
{
	std::cout << this->getType() << ": cat sound" << std::endl;
}
