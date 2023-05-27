/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 11:54:12 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/27 13:03:33 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

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
		std::string getIdeas() const;

		// Member functions
		void		setIdeas(unsigned int	i, std::string	ideas);
		std::string	getIdeas(unsigned int	i);
		std::string	*getAddress(unsigned int	i);

	private:
		std::string _ideas[100];
	protected:
};

#endif
