/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:16:51 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/06 10:53:15 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap {
	public:
		// Constructor
		ClapTrap(void);
		ClapTrap(std::string input_name);
		ClapTrap(ClapTrap const& obj);

		// Destructor
		~ClapTrap();

		// Operator
		ClapTrap &operator=(ClapTrap const &obj);

		// Member functions
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	protected:
		std::string	name;
		unsigned int			hit_points;
		unsigned int			energy_points;
		unsigned int			attack_damage;

};

#endif
