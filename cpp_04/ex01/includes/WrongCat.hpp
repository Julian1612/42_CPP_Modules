#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>

class WrongCat
{
	public:
		// Constructors
		WrongCat();
		WrongCat(const WrongCat &copy);

		// Destructor
		~WrongCat();

		// Operators
		WrongCat & operator=(const WrongCat &assign);

	private:

};

#endif
