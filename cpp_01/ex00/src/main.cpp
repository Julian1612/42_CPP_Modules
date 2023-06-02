/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:02:53 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/02 10:03:21 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

int main(void) {
	Zombie	*Franky = newZombie("Franky");

	Franky->announce();
	randomChump("Ringo");
	delete Franky;
	return (0);
}
