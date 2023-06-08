#include "../includes/WrongAnimal.hpp"


// Constructors
WrongAnimal::WrongAnimal()
{
	this->_type = "Wrong Animal";
	std::cout << "\e[0;33mDefault Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of WrongAnimal\e[0m" << std::endl;
}


// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[0;31mDestructor called of WrongAnimal\e[0m" << std::endl;
}


// Operators
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	std::cout << "WrongAnimal's copy assignment operator called" << std::endl;
	this->_type = assign.getType();
	return *this;
}

// Getter / Setter
std::string WrongAnimal::getType() const
{
	return (_type);
}

// Member functions
void	WrongAnimal::makeSound(void) const
{
	std::cout << this->getType() << ": Wrong animal sound" << std::endl;
}
