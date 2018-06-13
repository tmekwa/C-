/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:57:37 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/06 12:57:42 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
#include "Zombie.hpp"
# include <string>
# include <stdlib.h>
# include <time.h>

class ZombieEvent
{
    public:
        void    setZombieType(std::string type);
        Zombie  *newZombie(std::string name);

    private:
        Zombie _zombie;
        std::string _type;
};

#endif