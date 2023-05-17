/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:45:13 by jschneid          #+#    #+#             */
/*   Updated: 2023/05/17 16:46:28 by jschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
# define FIXED_H

# include <string>
# include <iostream>

class Fixed
{
	public:
		//** Task form the subject **//

		// A constructor that takes a constant integer as a parameter.
		Fixed(const int parameter);
		// A constructor that takes a constant floating-point number as a parameter.
		Fixed(const float parameter);
		// A member function that converts the fixed-point value to a floating-point value.
		float	toFloat(void) const;
		// A member function that converts the fixed-point value to an integer value.
		int		toInt(void) const;
		// An overload of the insertion («) operator that inserts a floating-point representation
		// of the fixed-point number into the output stream object passed as parameter.
		friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);

		Fixed(void);
		Fixed(Fixed const &other);
		Fixed &operator=(Fixed const &other);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);


	private:
		int					fixedPointNbr;
		static const int	nbrFractionalBits = 8;

};

#endif
