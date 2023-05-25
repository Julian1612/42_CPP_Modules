/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:37:26 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/25 17:41:45 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <string>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string input_name);
		ScavTrap(ScavTrap const& obj);
		virtual ~ScavTrap(void);
		ScavTrap	&operator=(ScavTrap const &obj);
		void		attack(const std::string& target);
		void		guardGate(void);
};

#endif
