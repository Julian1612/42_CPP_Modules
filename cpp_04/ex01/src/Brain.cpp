#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}
Brain::Brain( const Brain &obj )
{
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
	*this = obj;
}

Brain::~Brain( void )
{
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}

Brain &Brain::operator=( Brain const &instance)
{
	std::cout << "\e[0;33mCopy assignment operator called of Brain\e[0m" << std::endl;

	for (int i = 0; i < 100; i++)
	{
		if (this == &instance)
			return *this;
		this->_ideas[i] = instance._ideas[i];
	}
	return (*this);
}

void Brain::setIdeas( unsigned int i, std::string newIdea ) {
	if (i < 100)
		this->_ideas[i] = newIdea;
	else
		std::cout << "Here is already a idea stored" << std::endl;
}

// std::string Brain::getIdeas( unsigned int i ) const{
// 	std::cout << "hi" << std::endl;
// 	if (i < 100 && !this->_ideas[i].empty())
// 	{
// 		std::cout << "hi" << std::endl;
// 		return(this->_ideas[i]);
// 	}
// 	else
// 	{
// 		std::cout << "hi" << std::endl;
// 		return ("Here is still space for a new idea");
// 	}
// }

std::string Brain::getIdeas(unsigned int i) {
	if (i < 100 && !this->_ideas[i].empty())
		return this->_ideas[i];
	else
		return "Here is still space for a new idea";
}

std::string *Brain::getAddress( unsigned int i ) {
	if (!this->_ideas[i].empty())
		return(&this->_ideas[i]);
	else
		return (NULL);
}
