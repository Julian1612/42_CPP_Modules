/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:39:33 by jschneid          #+#    #+#             */
/*   Updated: 2023/04/18 17:53:11 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

Zombie::Zombie(std::string name)
{
	std::cout << name << ":";
}

void	Zombie::announce(void)
{
	std::cout << "BraiiiiiiinnnzzzZ" << std::endl;
}
