/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:32:26 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/15 17:58:47 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include <string>
#include "Weapon.h"

class HumanB
{
	private:
		std::string	m_name;
		Weapon		*m_weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon& weapon);
};

#endif
