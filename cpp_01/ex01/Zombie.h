/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:36:33 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/15 12:47:50 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie
{
	private:
		std::string m_name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
		void	setZombieName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
