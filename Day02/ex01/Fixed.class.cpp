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
    std::cout << "Default constrcutor called" << std::endl;
    this->_n = 0;
}

Fixed::Fixed(const Fixed& n)
{       
    std::cout << "Copy constructor called" << std::endl;
    this->_n = n.getRawBits();
}

Fixed::Fixed(float const n)
{
    this->_n = roundf(n * (1 << this->N));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    this->_n = n << this->N;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called " << std::endl;

    this->_n = rhs.getRawBits();

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


