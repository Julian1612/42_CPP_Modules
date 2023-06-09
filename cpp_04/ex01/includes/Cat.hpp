/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:54:51 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/08 22:02:30 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		// Constructors
		Cat();
		Cat(const Cat &copy);

		// Destructor
		~Cat();

		// Operators
		Cat & operator=(const Cat &assign);

		// Getters / Setters
		void	printIdeas() const;
		void	setIdea(unsigned int i, std::string idea) const;

		// Member functions
		void		makeSound(void) const;
	private:
		Brain	*brain;
};

#endif
