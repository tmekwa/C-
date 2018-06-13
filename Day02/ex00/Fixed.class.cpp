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


Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called " << this->_n << std::endl;

    this->_n = rhs.getRawBits();

    return *this;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_n;
}

void Fixed::setRawBits(int const n)
{
    this->_n = n;
}


std::ostream & operator << (std::ostream & o, Fixed const & rhs)
{
    o << rhs.getRawBits();
    return o;
}


