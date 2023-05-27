/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:43:19 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/27 13:01:50 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

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

void Cat::setIdeas( unsigned int i, std::string thoughts )
{
		this->brain->setIdeas(i, thoughts);
		return ;
}

void Cat::printIdeas( void )
{
	for (int i = 0; i < 100; i++)
	{
		if (this->brain->getIdeas(i) == "BLANK")
			;
		else
		{
			std::cout << "Idea : " << this->brain->getIdeas(i) << std::endl;
			std::cout << "Address : " << this->brain->getAddress(i) << std::endl;
		}
	}
	return ;
}
