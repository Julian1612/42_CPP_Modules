/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:24:53 by jschneid          #+#    #+#             */
/*   Updated: 2023/04/18 17:53:19 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
# include <string>

class Zombie
{
	public:
		std::string name;
		~Zombie() {
			std::cout << "Deleted Zombie: " << name << std::endl;
		};
		Zombie(std::string m_name);
		void	announce(void);
};


Zombie *newZombie(std::string name);

void randomChump(std::string name);

#endif
