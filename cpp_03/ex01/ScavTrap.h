/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:37:26 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/25 16:09:54 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>

class ScavTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string input_name);
		ScavTrap(ScavTrap const& obj);
		~ScavTrap();
		ScavTrap	&operator=(ScavTrap const &obj);
		void		guardGate();
	private:
		std::string				name;
		unsigned int			hit_points;
		unsigned int			energy_points;
		unsigned int			attack_damage;
};

#endif
