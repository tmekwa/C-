/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 15:19:17 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/06 15:19:19 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <stdlib.h>
#include <time.h>

ZombieHorde::ZombieHorde(int N)
{
    int n = this->N;
    std::string names[10] = {"Pumpkin", "Bob", "Frank", "Ro","Pumpkin","Roach", "Vampire", "Zompire", "Tooth-fairy", "Jerry"};
    srand(time(NULL));
    int random = rand() % 10;
    this->zombieList = new Zombie[n];
    while (n > 0)
    {
        this->zombieList[n] = Zombie(names[random], "rigby");
        n--;
    }
}

void    ZombieHorde::announce()
{
    int n = this->N;
    while (n > 0)
    {
        this->zombieList[n].announce();
        n--;
    }
}

ZombieHorde::~ZombieHorde()
{
    delete[] this->zombieList;    
}