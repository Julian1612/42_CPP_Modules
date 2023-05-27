/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:54:51 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/27 13:02:27 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		// Constructors
		Cat();
		Cat(const Cat &copy);

		// Destructor
		virtual ~Cat();

		// Operators
		Cat & operator=(const Cat &assign);

		// Getters / Setters
		std::string getType() const;

		// Member functions
		void	makeSound(void) const;
		void	setIdeas(unsigned int i, std::string	ideas);
		void	printIdeas(void);
	private:
		Brain	*brain;
	protected:
};

#endif
