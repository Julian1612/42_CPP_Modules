/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:24:53 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/02 10:04:15 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {
	private:
		std::string m_name;
	public:
		// Constructor
		Zombie(void);
		Zombie(std::string name);

		// Destructor
		~Zombie(void);

		// Member functions
		void	announce(void);
};

Zombie*	newZombie(std::string name);
void randomChump(std::string name);
#endif
