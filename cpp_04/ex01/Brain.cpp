/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:54:49 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/27 10:55:26 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	_ideas = "";
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	_ideas = copy.getIdeas();
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(std::string ideas)
{
	_ideas = ideas;
	std::cout << "\e[0;33mFields Constructor called of Brain\e[0m" << std::endl;
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
