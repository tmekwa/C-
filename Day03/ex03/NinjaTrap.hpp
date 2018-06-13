/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:39:09 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/08 16:39:17 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:
            NinjaTrap(std::string name);
            NinjaTrap(void);
            ~NinjaTrap(void);

            NinjaTrap &  operator=(NinjaTrap const & rhs);

            void       ninjaShoebox(NinjaTrap & NinjaTrapObject);
            void       ninjaShoebox(ClapTrap & clapTrapObject);
            void       ninjaShoebox(ScavTrap & scavTrapObject);
            void       ninjaShoebox(FragTrap & fragTrapObject);
            

            
};

#endif
