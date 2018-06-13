/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:56:59 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/06 12:57:01 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <stdlib.h>
# include <time.h>

class Zombie
{
    public:
        void        setName(std::string name);
        void        setType(std::string type);
        std::string &getName(void);
        std::string &getType(void);
        void        announce(void);

    private:
        std::string _name;
        std::string _type;
};

#endif