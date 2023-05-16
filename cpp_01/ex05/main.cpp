/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:48:02 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/16 14:46:59 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

// @todo nochmal verhleichen und drüberschauen

int main(void)
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("INVALID");
	return (0);
}
