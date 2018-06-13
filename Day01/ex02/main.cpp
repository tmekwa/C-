/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:07:20 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/06 13:07:25 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void    randomChump(void)
{
    std::string names[] = {"Jack", "Bob", "Frank", "Ro","Pumpkin"};
    std::string types[] = {"Pig", "Roach", "Vampire", "Zompire", "Tooth-fairy"};
    srand(time(NULL));
    int random1 = (rand() % 5);
    int random2 = (rand() % 5);

    ZombieEvent ze1 = ZombieEvent();
    ze1.setZombieType(types[random2]);
    Zombie *z1 = ze1.newZombie(names[random1]);
    z1->announce();

    delete z1;
}

int     main(void)
{
    randomChump();
    return (0);
}