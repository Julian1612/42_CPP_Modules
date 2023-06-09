#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

#include "Brain.hpp"

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(const Animal &copy);

		// Destructor
		virtual ~Animal();

		// Operators
		Animal &operator=(const Animal &assign);

		// Getters / Setters
		std::string getType() const;

		// Member function
		virtual void	makeSound(void) const = 0;
	protected:
		std::string _type;

};

#endif
