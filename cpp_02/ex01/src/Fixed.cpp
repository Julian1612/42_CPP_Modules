/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:45:11 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/03 18:34:44 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.h"

// Constructor
Fixed::Fixed(void) : fixedPointNbr(0 ){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int parameter) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointNbr = parameter << this->nbrFractionalBits;
}

Fixed::Fixed(const float parameter) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointNbr = roundf( parameter * ( 1 << this->nbrFractionalBits));
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// Destructor
Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

//Operators
Fixed &Fixed::operator=(Fixed const &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixedPointNbr = other.getRawBits();
	return (*this);
}

// Getter / Setter
int Fixed::getRawBits(void) const {
	return (this->fixedPointNbr);
}

void Fixed::setRawBits(int const raw) {
	this->fixedPointNbr = raw;
	return ;
}

// Member functions
float	Fixed::toFloat(void) const {
	return (static_cast<float>(this->fixedPointNbr) / (1 << this->nbrFractionalBits));
}

int		Fixed::toInt(void) const {
	return (this->fixedPointNbr >> this->nbrFractionalBits);
}

// Utility functions
std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return (os);
}
