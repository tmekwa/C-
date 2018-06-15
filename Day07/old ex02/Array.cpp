/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 10:12:15 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/14 10:12:17 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>
#include <string>

template< class T >
class Array
{
    public:
            Array( void )                      //Construction with no parameter
            {
                this->_arr = new T();
                this->_n = 0;
            }
            Array( unsigned int  n ) : _n(n)       //Construction by copy and assignment operator.
            {
                this->_arr = new T(n);
                this->_n = n;
                return;
            }
            Array( T const & src)              //Copy construction
            {
                *this = src;
                return;
            }
            ~Array( void )                     //Destruction
            {		
	    		delete [] this->_arr;
                return;
            }
            
            Array<T>       &operator=( const Array & rhs )
            {
                if (this != &rhs) 
                {
                    int i = 0;
                    while (i < this->_n)
                    {
                        this->_arr[i] = rhs[i];
                        i++;
                    }
                }
                return *this;
            }

            T           &operator[]( int n ) const
            {
                if (n <= (this->_n + 1))
                {
                    return this->_arr[n];
                }
                else
                {
                    throw Array::ArrayOutOfBoundException();
                }
            }

            unsigned int    size( void ) const
            {
                return (this->_n);
            }

                        
            class            ArrayOutOfBoundException : public std::exception
            {
                    public:
                            virtual const char *what() const throw()
                            {
                                return ("Array out of bound exception:: Error 404");
                            }
            };
    private:
            unsigned int     _n;
            T                *_arr;
};


int     main( void )
{
        Array<int> arr(5);
        std::cout << "a\n";
        for (unsigned int i = 0; i < arr.size(); i++){
            arr[i] = i;
        }
        std::cout << "b\n";
        for (unsigned int i = 0; i < arr.size(); i++){
            std::cout << arr[i] << ", ";
        }

        std::cout << '\n';

        try {
            std::cout << arr[69];
        }
        catch (std::exception &e){
            std::cout << e.what() << '\n';
        }


    	return 0;
}