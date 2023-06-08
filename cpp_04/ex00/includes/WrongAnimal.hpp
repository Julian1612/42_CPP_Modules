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

		// Getter / Setter
		std::string getType() const;

		//Member functions
		void	makeSound(void) const;
	protected:
		std::string	_type;

};

#endif
