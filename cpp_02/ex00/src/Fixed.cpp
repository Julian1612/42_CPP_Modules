/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:45:11 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/03 15:46:15 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Fixed.h"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->fixedPointNbr = 0;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPointNbr = other.getRawBits();
}

Fixed &Fixed::operator=(Fixed const &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixedPointNbr = other.getRawBits();
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
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPointNbr = raw;
}
