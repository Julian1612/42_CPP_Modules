/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:36:33 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/01 10:31:38 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie
{
	public:
		// Constructor
		Zombie(void);
		Zombie(std::string name);

		// Destructor
		~Zombie(void);

		// Member functions
		void	announce(void);
		void	setZombieName(std::string name);

	private:
		std::string m_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
