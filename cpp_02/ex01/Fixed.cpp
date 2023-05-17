/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:45:11 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/17 17:18:02 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.h"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPointNbr = 0;
	return ;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixedPointNbr = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const
{
	return (this->fixedPointNbr);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointNbr = raw;
	return ;
}

// A constructor that takes a constant integer as a parameter.
Fixed::Fixed(const int parameter)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointNbr = parameter << this->nbrFractionalBits;
}

// A constructor that takes a constant floating-point number as a parameter.
Fixed::Fixed(const float parameter)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointNbr = std::roundf( parameter * ( 1 << this->nbrFractionalBits));
}

// A member function float toFloat( void ) const; that converts the fixed-point value to a floating-point value.
float	Fixed::toFloat(void) const
{
	return (roundf( this->fixedPointNbr) / (float)(1 << this->nbrFractionalBits));
}

// A member function int toInt( void ) const; that converts the fixed-point value to an integer value.
int		Fixed::toInt(void) const
{
	return (this->fixedPointNbr / (1 << this->nbrFractionalBits));
}

// An overload of the insertion (<<) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter.
std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return (os);
}
