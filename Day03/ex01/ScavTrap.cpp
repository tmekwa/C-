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

ScavTrap::ScavTrap(std::string name) : _hitPoints(100), _maxHitPoint(100), _energyPoints(50), _maxEnergyPoints(50),
_level(1), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
    std::cout << "SCAVTRAP CALLED" << std::endl;
    this->_name = name;
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

void    ScavTrap::rangedAttack(std::string const & target)
{
    std::string statements[] = {"You call yourself a badass?", "Is it dead? Can, can I open my eyes now?",
        "That was a close one!", "Holy moly!","Like running over a bug!"};
    std::string Hits[] = {"Nade out!", "Grenade!",
        "Bad guy go boom!", "Take it!","Present for you!"};
    srand(time(NULL));
    int random1 = (rand() % 5);

    if (this->_hitPoints > 0)
    {
        std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target  << "> at range, causing <" << this->_rangedAttackDamage << "> points of damage ! " << std::endl;
        std::cout << this->_name << " : " << Hits[random1] << std::endl;
    }
    else
    {
        std::cout <<"FR4G-TP <" << this->_name << "> is Dead!" << std::endl;
        std::cout << this->_name << ": You savage, I'm Dead already!" << std::endl;
        
    }
    
}
void    ScavTrap::meleeAttack(std::string const & target)
{
    std::string statements[] = {"You call yourself a badass?", "Is it dead? Can, can I open my eyes now?",
        "That was a close one!", "Holy moly!","Like running over a bug!"};

    std::string Hits[] = {"Nade out!", "Grenade!",
        "Bad guy go boom!", "Take it!","Present for you!"};
    srand(time(NULL));
    int random1 = (rand() % 5);
    
    if (this->_hitPoints > 0)
    {
        std::cout <<"FR4G-TP <" << this->_name <<"> attacks <" << target  << "> at melee, causing <" << this->_meleeAttackDamage << "> points of damage ! " << std::endl;
        std::cout << this->_name << " : " << Hits[random1] << std::endl;

    }
    else
    {
        std::cout <<"FR4G-TP <" << this->_name << "> is Dead!" << std::endl;
        std::cout << this->_name << ": You swine!" << std::endl;
    }
}

void    ScavTrap::takeDamage(unsigned int amount)
{
        std::string statements[] = {"You call yourself a badass?", "Is it dead? Can, can I open my eyes now?",
         "That was a close one!", "Holy moly!","Like running over a bug!"};

        std::string Hits[] = {"Nade out!", "Grenade!",
         "Bad guy go boom!", "Take it!","Present for you!"};
         
        srand(time(NULL));
        int random1 = (rand() % 5);
        int random2 = (rand() % 5);
    if ((this->_hitPoints - (int)amount + this->_armorDamageReduction) <= 0)
    {
        std::cout << "FR4G-TP <" << this->_name << "> Is Dead Hit Points :" << "0"<< std::endl;
        std::cout << this->_name << " : " << statements[random1] << std::endl;
    }
    else
    {
        this->_hitPoints = (this->_hitPoints - amount) + this->_armorDamageReduction; 
        std::cout << "FR4G-TP <" << this->_name << "> Hit Points : <" << this->_hitPoints << ">" << std::endl;
        std::cout << this->_name << " : " << statements[random2] << std::endl;
    }
}
void    ScavTrap::beRepaired(unsigned int amount)
{
    
    int temp;
    if ((int)amount > 100)
    {
        std:: cout << "Cannot repair FR4G-TP <" << this->_name << "> with : <" << (int)amount << std::endl;
    }
    else
    {
        temp = this->_hitPoints + amount;
        if (temp > 100)
        {
            this->_hitPoints = 100;
             std:: cout << "Repair FR4G-TP amount <" << this->_name << "> is  : <" << temp << "> too much it will be set to <100> Hit Points" << std::endl;
             std:: cout << this->_name << "Thank You!" << std::endl;
        }
        else
        {
            this->_hitPoints = temp;
            std:: cout << "FR4G-TP <" << this->_name << ">repaird with : <" << temp <<"> Hit Points:" << this->_hitPoints << std::endl;
            std:: cout << this->_name << ": Thank You!" << std::endl;            
        }

    }
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
#pragma region              Sets and Gets

void            ScavTrap::setUnknownPlayer(std::string const _unknownTarget)
{
    this->_name = _unknownTarget;
}

std::string     ScavTrap::getUnknownPlayer(void) const
{
    return this->_name;
}


void            ScavTrap::set_meleeAttactDamage(int _mad)
{
    this->_meleeAttackDamage = _mad;
}

int     ScavTrap::get_meleeAttactDamage(void)
{
    return this->_meleeAttackDamage;
}


void            ScavTrap::set_rangedAttackDamage(int _rad)
{
    this->_rangedAttackDamage = _rad;
}

int     ScavTrap::get_rangedAttackDamage(void)
{
    return this->_rangedAttackDamage;
}


void            ScavTrap::set_armorDamageReduction(int _adr)
{
    this->_armorDamageReduction = _adr;
}

int     ScavTrap::get_armorDamageReduction(void)
{
    return this->_armorDamageReduction;
}


#pragma endregion


