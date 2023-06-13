/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:38:08 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/13 13:38:09 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// Constructors
		WrongCat();
		WrongCat(const WrongCat &copy);

		// Destructor
		~WrongCat();

		// Operators
		WrongCat & operator=(const WrongCat &assign);

		// Getter / Setter
		std::string getType() const;

		// Member function
		void	makeSound(void) const;
};

#endif
