/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:12:59 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/08 14:13:01 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
            ScavTrap(std::string name);
            ScavTrap(const ScavTrap & name);
            ScavTrap(void);
            ~ScavTrap(void);

            ScavTrap &  operator=(ScavTrap const & rhs);

            void        challengeNewcomer(std::string const & target);
};

#endif