/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:45:11 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/03 18:37:38 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "../includes/Fixed.h"

// Constructors
Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->fixedPointNbr = 0;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPointNbr = other.getRawBits();
}


Fixed::Fixed(const int parameter) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointNbr = parameter << this->nbrFractionalBits;
}

Fixed::Fixed(const float parameter) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointNbr = std::roundf( parameter * ( 1 << this->nbrFractionalBits));
}

// Destructors
Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

// Operator
Fixed &Fixed::operator=(Fixed const &other) {
	if (this != &other)
		this->fixedPointNbr = other.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed Fixed::operator>(Fixed const &other) {
	return (this->toFloat() > other.toFloat());
}

Fixed Fixed::operator<(Fixed const &other) {
	return (this->toFloat() < other.toFloat());
}

Fixed Fixed::operator>=(Fixed const &other) {
	return (this->toFloat() >= other.toFloat());
}

Fixed Fixed::operator<=(Fixed const &other) {
	return (this->toFloat() <= other.toFloat());
}

Fixed Fixed::operator==(Fixed const &other) {
	return (this->toFloat() == other.toFloat());
}

Fixed Fixed::operator!=(Fixed const &other) {
	return (this->toFloat() != other.toFloat());
}

Fixed Fixed::operator+(Fixed const &other) {
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(Fixed const &other) {
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(Fixed const &other) {
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(Fixed const &other) {
	return (this->toFloat() / other.toFloat());
}

Fixed Fixed::operator++(int) {
	Fixed	cpy = *this;
	this->fixedPointNbr++;
	return (cpy);
}

Fixed Fixed::operator++(void) {
	this->fixedPointNbr++;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed	cpy = *this;
	this->fixedPointNbr--;
	return (cpy);
}

Fixed Fixed::operator--(void) {
	this->fixedPointNbr--;
	return (*this);
}

const Fixed &Fixed::min(const Fixed &ref1, const Fixed &ref2) {
	if (ref1.toFloat() < ref2.toFloat())
		return (ref1);
	return (ref2);
}

const Fixed &Fixed::max(const Fixed &ref1, const Fixed &ref2) {
	if (ref1.toFloat() > ref2.toFloat())
		return (ref1);
	return (ref2);
}

Fixed &Fixed::min(Fixed &ref1, Fixed &ref2) {
	if (ref1.toFloat() > ref2.toFloat())
		return (ref1);
	return (ref2);
}

Fixed &Fixed::max(Fixed &ref1, Fixed &ref2) {
	if (ref1.toFloat() > ref2.toFloat())
		return (ref1);
	return (ref2);
}
// Member functions
int Fixed::getRawBits(void) const {
	return (this->fixedPointNbr);
}

void Fixed::setRawBits(int const raw) {
	this->fixedPointNbr = raw;
}


float Fixed::toFloat(void) const {
	return (static_cast<float>(this->fixedPointNbr) / (1 << this->nbrFractionalBits));
}

int Fixed::toInt(void) const {
	return (this->fixedPointNbr >> this->nbrFractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return (os);
}

