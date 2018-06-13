/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:57:09 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/06 12:57:12 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
# include <string>

void    ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
    Zombie *_newZombie = new Zombie();

    _newZombie->getType() = this->_type;
    _newZombie->getName() = name;
    return (_newZombie);
}
