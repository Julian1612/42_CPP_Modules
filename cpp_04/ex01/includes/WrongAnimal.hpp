#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		// Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);

		// Destructor
		~WrongAnimal();

		// Operators
		WrongAnimal & operator=(const WrongAnimal &assign);

	private:

};

#endif
