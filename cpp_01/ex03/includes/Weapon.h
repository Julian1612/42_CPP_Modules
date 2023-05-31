/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:32:41 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/15 17:53:57 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon
{
	private:
		std::string	m_type;
	public:
		Weapon(std::string weapon);
		~Weapon();
		const std::string	&getType(void) const;
		void				setType(std::string type);
};

#endif
