/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 14:51:57 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/07 14:51:59 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed(void)
{
    this->_n = 0;
}

Fixed::Fixed(const Fixed& n)
{       
    this->_n = n.getRawBits();
}

Fixed::Fixed(float const n)
{
    this->_n = roundf(n * (1 << this->N));
}

Fixed::Fixed(const int n)
{
    this->_n = n << this->N;
}

Fixed::~Fixed(void)
{
    return;
}
// comparison operators

Fixed & Fixed::operator=(Fixed const & rhs)
{
    this->_n = rhs.getRawBits();

    return *this;
}

Fixed &  Fixed::operator>(Fixed const & rhs)
{
    this->_n = rhs.getRawBits();

    return *this;
}

Fixed &  Fixed::operator<( Fixed const & rhs)
{
    this->_n = rhs.getRawBits();

    return *this;
}
Fixed &  Fixed::operator>=( Fixed const & rhs)
{
    std::cout << "Greater/Equal operator called " << std::endl;

    this->_n = rhs.getRawBits();

    return *this;
}
Fixed &  Fixed::operator<=( Fixed const & rhs)
{
    std::cout << "less than called " << std::endl;

    this->_n = rhs.getRawBits();

    return *this;
}       
Fixed &  Fixed::operator==( Fixed const & rhs)
{

    this->_n = rhs.getRawBits();

    return *this;
}
Fixed &  Fixed::operator!=( Fixed const & rhs)
{
    this->_n = rhs.getRawBits();

    return *this;
}

//Sign operators

Fixed &  Fixed::operator+( Fixed const & rhs)
{

    this->_n += rhs.getRawBits();

    return *this;
}
Fixed &  Fixed::operator-( Fixed const & rhs)
{
    this->_n -= rhs.getRawBits();

    return *this;
}        
Fixed &  Fixed::operator*( Fixed const & rhs)
{
    this->_n = rhs.getRawBits();

    return *this;
}
Fixed &  operator/( Fixed const & rhs)
{
    this->_n /= rhs.getRawBits();

    return *this;
}



// region  pre-increment, post-increment, pre-decrement and post-decrement operators

Fixed &     Fixed::operator++( Fixed const & rhs, int)
{
    std::cout << this->_n++ = rhs.getRawBits() << std::endl;;
    return *this;
    
}
Fixed       Fixed::operator++( Fixed const & rhs)
{
    std::cout << ++this->_n = rhs.getRawBits() << std::endl;;

    return *this;
}
Fixed &     Fixed::operator--( Fixed const & rhs, int)
{
    std::cout << this->_n-- = rhs.getRawBits() << std::endl;;

    return *this;
}
       
Fixed       Fixed::operator--( Fixed const & rhs)
{
    std::cout << --this->_n = rhs.getRawBits() << std::endl;;

    return *this;
}


int     Fixed::getRawBits(void) const
{
    return this->_n;
}

void Fixed::setRawBits(int const n)
{
    this->_n = n;
}

int    Fixed::toInt(void) const
{
    return ((int)this->_n >> this->N);
}

float    Fixed::toFloat(void) const
{
    return ((float)this->_n / (1 << this->N));
}


std::ostream & operator << (std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}


