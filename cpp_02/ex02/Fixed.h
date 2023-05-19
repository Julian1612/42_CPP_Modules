/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:45:13 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/19 18:07:07 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
# define FIXED_H

# include <string>
# include <iostream>

class Fixed
{
	private:
		int					fixedPointNbr;
		static const int	nbrFractionalBits = 8;

	public:
		Fixed(void);
		Fixed(Fixed const &other);
		Fixed &operator=(Fixed const &other);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		//** Task 2 form the subject **//

		Fixed(const int parameter);
		Fixed(const float parameter);
		float	toFloat(void) const;
		int		toInt(void) const;
		friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);

		//** Task 3 form the subject **//

		Fixed operator>(Fixed const &other);
		Fixed operator<(Fixed const &other);
		Fixed operator>=(Fixed const &other);
		Fixed operator<=(Fixed const &other);
		Fixed operator==(Fixed const &other);
		Fixed operator!=(Fixed const &other);
		Fixed operator+(Fixed const &other);
		Fixed operator-(Fixed const &other);
		Fixed operator*(Fixed const &other);
		Fixed operator/(Fixed const &other);

		Fixed operator++(int);
		Fixed operator++(void);
		Fixed operator--(int);
		Fixed operator--(void);

		static const Fixed &min( const Fixed &ref1, const Fixed &ref2 );
		static const Fixed &max( const Fixed &ref1, const Fixed &ref2 );
		static Fixed &min( Fixed &ref1, Fixed &ref2 );
		static Fixed &max( Fixed &ref1, Fixed &ref2 );
};

#endif
