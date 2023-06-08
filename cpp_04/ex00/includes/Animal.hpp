#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		// Constructors
		Animal();
		Animal(const Animal &copy);

		// Destructor
		~Animal();

		// Operators
		Animal & operator=(const Animal &assign);

		// Getters / Setters
		std::string getType() const;

		// Member function
		virtual void	makeSound(void) const;
	protected:
		std::string _type;

};

#endif
