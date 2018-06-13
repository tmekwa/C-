/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 07:41:23 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/08 07:41:26 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
            FragTrap(std::string name);
            FragTrap(const FragTrap & name);
            FragTrap(void);
            ~FragTrap(void);

            FragTrap &  operator=(FragTrap const & rhs);

            void        vaulthunter_dot_exe(std::string const & target);

    private:
            int             _fartAttack;
            int             _heartAttack;
            int             _shoeAttack;
            int             _sleep;
            int             _KingKong;

};

#endif