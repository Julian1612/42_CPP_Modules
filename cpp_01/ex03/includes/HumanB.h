/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:32:26 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/02 10:43:37 by jschneid         ###   ########.fr       */
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

		// Setter
		void	setWeapon(Weapon& weapon);

		// Member functions
		void	attack(void) const;

	private:
		std::string	m_name;
		Weapon		*m_weapon;
};

#endif
