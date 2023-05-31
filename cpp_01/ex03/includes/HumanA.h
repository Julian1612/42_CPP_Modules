/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:32:17 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/15 17:59:49 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include <string>
#include "Weapon.h"

class HumanA
{
	private:
		std::string	m_name;
		Weapon&	m_weapon;
		HumanA();
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void	attack(void) const;
};

#endif
