/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 15:18:58 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/06 15:19:02 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

std::string    &Zombie::getName(void)
{
    return this->name;
}

std::string &Zombie::getType(void)
{
    return this->type;
}

void    Zombie::announce(void){
    std::cout << "<"<< this->name <<" ("<< this->type <<")> Braiiiiiiinnnssss..." << std::endl;
}
