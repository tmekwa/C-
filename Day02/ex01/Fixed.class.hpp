/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 13:19:03 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/07 13:19:05 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed(const Fixed& n);
        ~Fixed(void);
        Fixed(void);
        Fixed(int const n);
        Fixed(float const n);

        //comparison operators 
        Fixed &     operator=( Fixed const & rhs);
        int         getRawBits( void ) const;
        void        setRawBits( int const n );
        int         toInt(void) const;
        float       toFloat(void) const;

    private:
        int _n;
        static const int N = 8;
};

std::ostream & operator << (std::ostream & o, Fixed const & rhs);

#endif