/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:32:41 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/02 10:31:32 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon
{
	public:
		// Constructor
		Weapon(std::string weapon);

		// Destructor
		~Weapon(void);

		// Getter / Setter
		const std::string	&getType(void) const;
		void				setType(std::string type);

	private:
		std::string	m_type;
};

#endif
