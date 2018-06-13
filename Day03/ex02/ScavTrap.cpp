/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:12:49 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/08 14:12:52 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
# include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) 
{
    _hitPoints = 100;
    _maxHitPoint = 100;
    _energyPoints = 50;
    _maxEnergyPoints = 50;
    _level = 1;
    _meleeAttackDamage = 20;
    _rangedAttackDamage = 15;
    _armorDamageReduction = 5;    
    _name = name;
    std::cout << "SCAVTRAP CALLED" << std::endl;
    
   return;
}

ScavTrap::ScavTrap(void)
{
    std::cout << "SCAVTRAP CALLED" << std::endl;
    
    return;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "SCAVTRAP DEAD" << std::endl;
    
    return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
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

void       ScavTrap::challengeNewcomer(std::string const & target)
{
    std::string quotes[] = {"Hey everybody! Check out my package!", "Let's get this party started!",
    "Glitching weirdness is a term of endearment, right?","Recompiling my combat code!",
    "This time it'll be awesome, I promise!","Look out everybody! Things are about to get awesome!"};
    srand(time(NULL));
    int random1 = (rand() % 6);

    std::cout << quotes[random1] <<std::endl;

}

