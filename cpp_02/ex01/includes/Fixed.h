/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:45:13 by jschneid          #+#    #+#             */
/*   Updated: 2023/06/03 15:32:18 by jschneid         ###   ########.fr       */
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

		// Destructor
		~Fixed(void);

		// Operators
		Fixed &operator=(Fixed const &other);
		friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);

		// Member functions
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		int					toInt(void) const;
		float				toFloat(void) const;

	private:
		int					fixedPointNbr;
		static const int	nbrFractionalBits = 8;

};

#endif
