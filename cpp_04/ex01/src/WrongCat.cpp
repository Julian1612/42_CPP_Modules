#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat()
{
	this->_type = "Wrong Cat";
	std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << std::endl;
}


// Destructor
WrongCat::~WrongCat()
{
	std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}


// Operators
WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	(void) assign;
	return *this;
}

// Getter/Setter
std::string WrongCat::getType() const
{
	return (_type);
}

// Member function
void	WrongCat::makeSound(void) const
{
	std::cout << this->getType() << ": Wrong Cat noise" << std::endl;
}

