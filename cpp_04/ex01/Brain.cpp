/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:54:49 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/30 16:12:16 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}


// Destructor
Brain::~Brain()
{
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}


// Operators
Brain & Brain::operator=(const Brain &assign)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = assign._ideas[i];
	std::cout << "Brain's copy assignment operator called" << std::endl;
	return *this;
}


// Getters / Setters
void Brain::setIdeas( unsigned int i, std::string thoughts )
{
		if (i < 100)
				this->_ideas[i] = thoughts;
		else
				std::cout << "My brain's storage capacity reached its limit," << std::endl;
		return ;
}

// @todo change the blank message to something custom
std::string	Brain::getIdeas(unsigned int i) const
{
		if (!_ideas[i].empty())
				return (_ideas[i]);
		else
				return ("BLANK");
}

std::string	*Brain::getAddress(unsigned int i)
{
		if (!_ideas[i].empty())
			return(&_ideas[i]);
		else
			return (NULL);
}
