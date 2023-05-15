/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:02:53 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/15 11:05:21 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

int main(void)
{
	Zombie	*Franky = newZombie("Frank the Tank");

	Franky->announce();
	randomChump("Thorsten");
	delete Franky;
	return (0);
}

// int	main(void)
// {
// 	Zombie Frank("Franky");

// 	Frank.announce();
// }
