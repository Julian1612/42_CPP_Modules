/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:52:58 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/08 23:02:03 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

// Constructors
Dog::Dog(void)
{
	this->_type = "🐕";
	this->brain = new Brain();
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy)  :Animal(copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}


// Destructor
Dog::~Dog()
{
	delete this->brain;
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	this->_type = assign.getType();
	std::cout << "Dog's copy assignment operator called" << std::endl;
	return (*this);
}

// Getters / Setters
void Dog::setIdea(unsigned int i, std::string idea) const
{
	this->brain->setIdeas(i, idea);
}

void Dog::printIdeas() const
{
	for (int i = 0; i < 100; i++) {
		if (this->brain->getIdeas(i) == "")
			;
		else
		{
			std::cout << "Idea : " << this->brain->getIdeas(i) << std::endl;
			std::cout << "Address : " << this->brain->getAddress(i) << std::endl;
		}
	}
}


// Member functions
void	Dog::makeSound(void) const
{
	std::cout << this->getType() << "  : woof woof" << std::endl;
}
