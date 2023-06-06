/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:24:15 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/06 10:54:19 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>
#include "ClapTrap.h"

class FragTrap : public ClapTrap {
	public:
		// Constructor
		FragTrap(void);
		FragTrap(std::string input_name);
		FragTrap(FragTrap const& obj);

		// Destructor
		~FragTrap();

		// Operator
		FragTrap &operator=(FragTrap const &obj);

		// Member functions
		void	highFivesGuys(void);
};

#endif
