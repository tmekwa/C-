/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:56:47 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/06 12:56:50 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
# include <string>

void    Zombie::setName(std::string name)
{
    this->_name = name;
}

void    Zombie::setType(std::string type)
{
    this->_type = type;
}

std::string &Zombie::getName(void)
{
    return (this->_name);
}

std::string &Zombie::getType(void)
{
    return (this->_type);
}

void    Zombie::announce(void){
    std::cout << "<"<< this->_name <<" ("<< this->_type <<")> Braiiiiiiinnnssss..." << std::endl;
}