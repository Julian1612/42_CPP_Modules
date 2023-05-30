/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:55:07 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/27 13:01:26 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		// Constructors
		Dog();
		Dog(const Dog &copy);

		// Destructor
		virtual ~Dog();

		// Operators
		Dog & operator=(const Dog &assign);

		// Getters / Setters
		std::string getType() const;

		// Member functions
		void	makeSound(void) const;
		void	setBrain(unsigned int i, std::string	ideas);
		void	printIdeas(void);
	private:
		Brain	*brain;
	protected:
};

#endif
