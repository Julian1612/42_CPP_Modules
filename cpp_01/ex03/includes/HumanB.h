/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:32:26 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/01 10:45:24 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <string>
#include "Weapon.h"

class HumanB
{
	public:
		// Constructor
		HumanB(std::string name);

		// Destructor
		~HumanB(void);

		// Member functions
		void	attack(void);
		void	setWeapon(Weapon& weapon);

	private:
		std::string	m_name;
		Weapon		*m_weapon;
};

#endif
