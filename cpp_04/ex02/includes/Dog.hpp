/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:55:07 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/08 22:02:37 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		// Constructors
		Dog();
		Dog(const Dog &copy);

		// Destructor
		~Dog();

		// Operators
		Dog & operator=(const Dog &assign);

		// Getters / Setters
		void	printIdeas() const;
		void	setIdea(unsigned int i, std::string idea) const;

		// Member functions
		void	makeSound(void) const;
	private:
		Brain	*brain;
};

#endif
