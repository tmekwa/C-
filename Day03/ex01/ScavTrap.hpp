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

class ScavTrap{
    public:
            ScavTrap(std::string name);
            ScavTrap(const ScavTrap & name);
            ScavTrap(void);
            ~ScavTrap(void);

            ScavTrap &  operator=(ScavTrap const & rhs);
            void        rangedAttack(std::string const & target);
            void        meleeAttack(std::string const & target);
            void        takeDamage(unsigned int amount);
            void        beRepaired(unsigned int amount);
            void        setUnknownPlayer(std::string const unknownTarget);
            std::string getUnknownPlayer(void) const;
            void        challengeNewcomer(std::string const & target);

            void        set_meleeAttactDamage(int _mad);
            int         get_meleeAttactDamage(void);

            int         get_armorDamageReduction(void);
            void        set_armorDamageReduction(int _ard);

            void        set_rangedAttackDamage(int _rad);
            int         get_rangedAttackDamage(void);            

    private:
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