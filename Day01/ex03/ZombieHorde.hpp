/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 15:19:26 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/06 15:19:29 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H
# include "Zombie.hpp"
# include <iostream>
# include <string>

class ZombieHorde{
        public:
                ZombieHorde(int N);
                void announce(void);
                ~ZombieHorde();
        private:
                Zombie *zombieList;
                int N;
};

#endif

