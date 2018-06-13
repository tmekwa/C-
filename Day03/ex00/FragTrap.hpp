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

class FragTrap{
    public:
            FragTrap(std::string name);
            FragTrap(const FragTrap & name);
            FragTrap(void);
            ~FragTrap(void);

            FragTrap &  operator=(FragTrap const & rhs);
            void        rangedAttack(std::string const & target);
            void        meleeAttack(std::string const & target);
            void        takeDamage(unsigned int amount);
            void        beRepaired(unsigned int amount);
            void        setUnknownPlayer(std::string const unknownTarget);
            std::string getUnknownPlayer(void) const;
            void        vaulthunter_dot_exe(std::string const & target);

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
            int             _fartAttack;
            int             _heartAttack;
            int             _shoeAttack;
            int             _sleep;
            int             _KingKong;
};

#endif