/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:54:49 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/27 12:46:23 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	_ideas = copy.getIdeas();
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
	_ideas = assign.getIdeas();
	return *this;
}


// Getters / Setters
std::string Brain::getIdeas() const
{
	return _ideas;
}

void Brain::setIdeas( unsigned int i, std::string thoughts )
{
		if (i < 100)
				this->ideas[i] = thoughts;
		else
		{
				std::cout << "My brain's storage capacity reached its limit," << std::endl;
				std::cout << " so now it's operating on unallocated memory" << std::endl;
		}
		return ;
}

std::string	Brain::getIdeas(unsigned int i)
{
		if (!ideas[i].empty())
				return (ideas[i]);
		else
				return ("BLANK");
}

std::string	*Brain::getAddress(unsigned int i)
{
		if (!ideas[i].empty())
			return(&ideas[i]);
		else
			return (NULL);
}
