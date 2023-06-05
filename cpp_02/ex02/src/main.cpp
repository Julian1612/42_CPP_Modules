/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:45:16 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/05 14:20:17 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.h"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "*-- Subject test --*" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed	c;
	Fixed	d(25);
	Fixed	e(75.25f);
	Fixed	f(b);
	Fixed	g;

	c = Fixed(25.75f);
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "f is " << f << std::endl;
	std::cout << "c is " << c.toInt() << " as Int" << std::endl;
	std::cout << "d is " << d.toInt() << " as Int" << std::endl;
	std::cout << "e is " << e.toInt() << " as Int" << std::endl;
	std::cout << "f is " << f.toInt() << " as Int" << std::endl;

	//Comparision operators test
	std::cout << "\n\n*-- Comparision test --*" << std::endl;
	std::cout << c << " is greater then " << b << ": ";
	if (c.toFloat() > b.toFloat())
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
	//----------------------------------//
	std::cout << c << " is less then " << b << ": ";
	if (c.toFloat() < b.toFloat())
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
	//----------------------------------//
	std::cout << c << " is is greater than or equal to " << b << ": ";
	if (c.toFloat() >= b.toFloat())
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
	//----------------------------------//
	std::cout << c << " is is less than or equal to " << b << ": ";
	if (c.toFloat() <= b.toFloat())
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
	//----------------------------------//
	std::cout << c << " is is equal to " << b << ": ";
	if (c.toFloat() == b.toFloat())
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
	//----------------------------------//
	std::cout << c << " is is not equal to " << b << ": ";
	if (c.toFloat() != b.toFloat())
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;

	// Arithmetic operators test
	std::cout << "\n\n*-- Arithmetic test --*" << std::endl;
	std::cout << c << " + " << d << " = " << (c + d) << std::endl;
	std::cout << c << " - " << d << " = " << (c - d) << std::endl;
	std::cout << c << " * " << d << " = " << (c * d) << std::endl;
	std::cout << c << " / " << d << " = " << (c / d) << std::endl;

	// Increment tests
	Fixed	h(25);
	Fixed	i(25);
	Fixed	j(25);
	Fixed	k(25);
	std::cout << "\n\n*-- Increment test --*" << std::endl;
	std::cout << "++" << h << " = " << ++h << std::endl;
	std::cout << i << "++" << " = " << i++ << std::endl;
	std::cout << "--" << j << " = " << --j << std::endl;
	std::cout << k << "--" << " = " << k-- << std::endl;

	// Min/max tests
	std::cout << "\n\n*-- Min/max test --*" << std::endl;
	std::cout << "the min of " << d << " and " << e << " is " << Fixed::min(d, e) << std::endl;
	std::cout << "the max of " << d << " and " << e << " is " << Fixed::max(d, e) << std::endl;
	std::cout << "the min of " << d << " and " << e << " is " << Fixed::min(h, e) << std::endl;
	std::cout << "the max of " << d << " and " << e << " is " << Fixed::max(h, e) << std::endl;


	return 0;
}
