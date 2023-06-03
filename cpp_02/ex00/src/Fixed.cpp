/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:45:11 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/03 17:08:05 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Fixed.h"

Fixed::Fixed(void) {
	this->fixedPointNbr = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	this->fixedPointNbr = other.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &other) {
	if (this != &other)
		this->fixedPointNbr = other.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointNbr);
}

void Fixed::setRawBits(int const raw) {
	this->fixedPointNbr = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
