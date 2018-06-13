/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:39:00 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/08 16:39:02 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"


NinjaTrap::NinjaTrap(std::string name)
{
    std::cout << "NINJATRAP CALLED" << std::endl;

   _hitPoints = 60;
   _maxHitPoint = 60;
   _energyPoints = 120;
   _maxEnergyPoints = 120;
   _level = 1;
   _meleeAttackDamage = 60;
   _rangedAttackDamage = 5;
   _armorDamageReduction = 0;   
   _name = name;
   
   return;
}

NinjaTrap::NinjaTrap(void)
{
    std::cout << "NINJATRAP CALLED" << std::endl;
    
    return;
}

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "NINJATRAP DEAD" << std::endl;
    
    return;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs)
{
    this->_hitPoints = rhs._hitPoints;
    this->_maxHitPoint = rhs._maxHitPoint;
    this->_energyPoints = rhs._energyPoints;
    this->_maxEnergyPoints = rhs._maxEnergyPoints;
    this->_level = rhs._level;
    this->_meleeAttackDamage = rhs._meleeAttackDamage;
    this->_rangedAttackDamage = rhs._rangedAttackDamage;
    this->_armorDamageReduction = rhs._armorDamageReduction;
    return *this;
}

void        NinjaTrap::ninjaShoebox(FragTrap & fragTrapObject)
{
        std::cout << fragTrapObject.getUnknownPlayer() << " : FragTrap Here To Stay" << std::endl;
}

void        NinjaTrap::ninjaShoebox(ScavTrap & scavTrapObject)
{
        std::cout << scavTrapObject.getUnknownPlayer() << " : ScavTrap Here To Stay" << std::endl;    
}

void        NinjaTrap::ninjaShoebox(ClapTrap & clapTrapObject)
{
        std::cout << clapTrapObject.getUnknownPlayer() << " : ClapTrap decides all" << std::endl;    
}

void        NinjaTrap::ninjaShoebox(NinjaTrap & NinjaTrapObject)
{
        std::cout << NinjaTrapObject.getUnknownPlayer() << " : NinjaTrap just hot here, but also here to stay" << std::endl;    
}
