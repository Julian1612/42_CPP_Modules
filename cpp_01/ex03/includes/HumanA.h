/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:32:17 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/01 10:52:32 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <string>
#include "Weapon.h"

class HumanA
{
	public:
		// Constructor
		HumanA(void);
		HumanA(std::string name, Weapon& weapon);

		// Destructor
		~HumanA(void);

		// Member functions
		void		attack(void) const;

	private:
		std::string	m_name;
		Weapon&		m_weapon;
};

#endif
