/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:45:13 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/05 13:54:52 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
# define FIXED_H

# include <string>
# include <iostream>

class Fixed {
	public:
		// Constructor
		Fixed(void);
		Fixed(const int parameter);
		Fixed(const float parameter);
		Fixed(Fixed const &other);
		Fixed &operator=(Fixed const &other);

		// Destructor
		~Fixed(void);

		// Operators
		bool operator>(Fixed const &other) const;
		bool operator<(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;
		Fixed operator+(Fixed const &other) const;
		Fixed operator-(Fixed const &other) const;
		Fixed operator*(Fixed const &other) const;
		Fixed operator/(Fixed const &other) const;
		Fixed operator++(int);
		Fixed &operator++();
		Fixed operator--(int);
		Fixed &operator--();

		// Member functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static const Fixed &min( const Fixed &ref1, const Fixed &ref2 );
		static const Fixed &max( const Fixed &ref1, const Fixed &ref2 );
		static Fixed &min( Fixed &ref1, Fixed &ref2 );
		static Fixed &max( Fixed &ref1, Fixed &ref2 );

	private:
		int					fixedPointNbr;
		static const int	nbrFractionalBits = 8;
};

// Utility functions
std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
