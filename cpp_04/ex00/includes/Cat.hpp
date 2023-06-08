/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:54:51 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/08 13:22:19 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"

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
		std::string getType() const;

		// Member functions
		void	makeSound(void) const;
};

#endif
