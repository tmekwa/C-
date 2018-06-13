/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 07:41:16 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/08 07:41:18 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    std::cout << "FRAGTRAP CALLED" << std::endl;

   _hitPoints = 100;
   _maxHitPoint = 100;
   _energyPoints = 100;
   _maxEnergyPoints = 100;
   _level = 1;
   _meleeAttackDamage = 30;
   _rangedAttackDamage = 20;
   _armorDamageReduction = 5;   
   _name = name;
   
   return;
}

FragTrap::FragTrap(void)
{
    std::cout << "FRAGTRAP CALLED" << std::endl;
    
    return;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FRAGTRAP DEAD" << std::endl;
    
    return;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

void       FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int hunters[] = {this->_fartAttack, this->_heartAttack, this->_shoeAttack, this->_sleep, this->_KingKong};
    
    srand(time(NULL));
    int random1 = (rand() % 5);

    int temp = this->_energyPoints - 25;
    
    if (temp > -1)
    {
        this->_energyPoints -= 25;
        if (hunters[random1] == 14)
        {
            takeDamage(this->_fartAttack);
            std::cout << "VAULT_HUNTER = Fart Attack from <" << this->_name  << "> to"<< target << ">, it does <" << this->_fartAttack << "> damage" << std::endl;
            std::cout << target << " : " << "It SSSTINKS!" << std::endl;
            std::cout << "VAULT_HUNTER = <" << this->_name << "> : " << "Energy Points: " << this->_energyPoints << std::endl;
        }
        else if (hunters[random1] == 100)
        {
            takeDamage(this->_heartAttack);
            std::cout << "VAULT_HUNTER = Heart Attack <" << this->_name << "> Hit Points : <" << this->_heartAttack << "> damage" << std::endl;
            std::cout << target << " : " << "My Heart!" << std::endl;  
            std::cout << "VAULT_HUNTER = <" << this->_name << "> : " << "Energy Points: " << this->_energyPoints << std::endl;
                
        }
        else if (hunters[random1] == 17)
        {
            takeDamage(this->_shoeAttack);
            std::cout << "VAULT_HUNTER = Shoe Attack from <" << this->_name  << "> to <"<< target << ">, it does <" << this->_shoeAttack << "> damage" << std::endl;
            std::cout << target << " : " << "Theres a shoe stcuk on my head!" << std::endl;
            std::cout << "VAULT_HUNTER = <" << this->_name << "> : " << "Energy Points: " << this->_energyPoints << std::endl;
        }
        else if (hunters[random1] == 13)
        {
            takeDamage(this->_sleep);
            std::cout << "VAULT_HUNTER = Sleep Attack from <" << this->_name  << "> to <"<< target << ">, it does <" << this->_sleep << "> damage" << std::endl;
            std::cout << target << " : " << "Feeling sleepy!" << std::endl;
            std::cout << "VAULT_HUNTER = <" << this->_name << "> : " << "Energy Points: " << this->_energyPoints << std::endl;
        }
        else{
            takeDamage(this->_KingKong);
            std::cout << "FR4G-TP King Kong Attack from <" << this->_name  << "> to <"<< target << ">, it does <" << this->_KingKong << "> damage" << std::endl;
            std::cout << target << " : " << "Not King Kong N$$$$$!" << std::endl;
            std::cout << "VAULT_HUNTER = <" << this->_name << "> : " << "Energy Points: " << this->_energyPoints << std::endl;
        }
    }
    else
    {
        std::cout << "FR4G-TP <" << this->_name << "> not enough energy points. Points: <" << this->_energyPoints << ">" << std::endl;
    }
}