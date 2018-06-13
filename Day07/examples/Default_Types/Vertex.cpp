/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vertex.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 11/34/56 by tmekwa          #+#    #+#             */
/*   Updated: 2018/06/13 11/34/56 by tmekwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template< typename T = float >
class Vertex {
	public:
		Vertex( T const & x, T const & y, T const & z) : _x( x ), _y( y ), _z( z ) { }
		~Vertex( void ){}

		T const &	getX( void ) const { return this->_x; }
		T const &	getY( void ) const { return this->_y; }
		T const &	getZ( void ) const { return this->_z; }

	private:
		T const _x;
		T const _y;
		T const _z;		
		Vertex( void );
	protected:

};

template< typename T>
std::ostream & operator<<( std::ostream & o, Vertex< T > const & v)
{
	std::cout.precision( 1 );
	o << setiosflags( std::ios::fixed );
	o << "Vertex( ";
	o << v.getX() << ", ";
	o << v.getY() << ", ";
	o << v.getZ();
	o << " )";
	return o;
}

