/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 15:23:21 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/08 15:23:24 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap{
    public:
            ClapTrap(void);
            ~ClapTrap(void);

            ClapTrap &  operator=(ClapTrap const & rhs);
            void        rangedAttack(std::string const & target);
            void        meleeAttack(std::string const & target);
            void        takeDamage(unsigned int amount);
            void        beRepaired(unsigned int amount);
            void        setUnknownPlayer(std::string const unknownTarget);
            std::string getUnknownPlayer(void) const;

            void        set_meleeAttactDamage(int _mad);
            int         get_meleeAttactDamage(void);

            int         get_armorDamageReduction(void);
            void        set_armorDamageReduction(int _ard);

            void        set_rangedAttackDamage(int _rad);
            int         get_rangedAttackDamage(void);            

    protected:
            int             _hitPoints;
            int             _maxHitPoint;
            int             _energyPoints;
            int             _maxEnergyPoints;
            int             _level;
            std::string     _name;
            int             _meleeAttackDamage;
            int             _rangedAttackDamage;
            int             _armorDamageReduction;
};

#endif
