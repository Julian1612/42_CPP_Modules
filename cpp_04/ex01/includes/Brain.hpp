#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
// # include <string>

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);

		// Destructor
		~Brain();

		// Operators
		Brain & operator=(const Brain &assign);

		// Getters / Setters
		void 		setIdeas(unsigned int i, std::string newIdea);
		std::string	getIdeas(unsigned int);

	private:
		std::string	_ideas[100];

};

#endif
