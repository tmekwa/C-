/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 14:38:44 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/14 14:38:48 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

template< class T >
class Array
{
    public:
            class       IndexOutOfBoundException : public std::exception
            {
                public:
                        virtual const char  *what() const throw()
                        {
                            return ("Index out of bound");
                        }
            };
            Array( void )
            {
                this->_size = 0;
                this->_arr = new T[0];
                return;
            }
            Array(unsigned int n)
            {
                this->_size = n;
                this->_arr = new T[this->_size];
                return;
            }
            ~Array(void)
            {
                delete[] this->_arr;
            }
            Array( Array const & src)
            {
                *this = src;
            }
            Array<T>    & operator=( const Array  & rhs )
            {
                this->_size = rhs._size;
                this->_arr = new T[rhs._size];
                int i = 0;
                while (static_cast<unsigned int>(i) <= rhs._size)
                {
                    this->_arr[i] = rhs._arr[i];
                    i++;
                }
                return *this;
            }

            T   & operator[]( int n ) const
            {
                if (static_cast<unsigned>(n) <= this->_size)
                    return this->_arr[n];
                else
                    throw IndexOutOfBoundException();
            }

            unsigned int    size() const
            {
                return this->_size;
            }
            
            
    private:
            T       *_arr;    
            unsigned int     _size;

};