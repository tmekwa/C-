/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 15:19:07 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/06 15:19:10 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include "Zombie.hpp"
# include <iostream>
#include <string>


class Zombie
{
    public:
        std::string &getName(void);
        std::string &getType(void);
        void        announce(void);
    private:
        std::string name;
        std::string type;
};
#endif
