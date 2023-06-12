/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:43:19 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/12 10:21:00 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

// Constructors
Cat::Cat(void)
{
	this->_type = "🐈";
	this->brain = new Brain();
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	delete this->brain;
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	std::cout << "Copy assignment operator called of Cat" << std::endl;
	if (this != &assign)
	{
		this->_type = assign._type;
		this->brain = new Brain( *assign.brain );
	}
	return *this;
}


// Getters / Setters
void Cat::setIdea(unsigned int i, std::string idea) const
{
	this->brain->setIdeas(i, idea);
}

void Cat::printIdeas() const
{
	for (int i = 0; i < 100; i++) {
		if (this->brain->getIdeas(i) == "Here is still space for a new idea")
			return ;
		else
			std::cout << "Idea : " << this->brain->getIdeas(i) << std::endl;
	}
}


// Member functions
void	Cat::makeSound(void) const
{
	std::cout << this->getType() << "  : meeeeeeow" << std::endl;
}
