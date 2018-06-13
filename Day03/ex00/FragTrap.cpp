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

FragTrap::FragTrap(std::string name) : _hitPoints(100), _maxHitPoint(100), _energyPoints(100), _maxEnergyPoints(100),
_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
    std::cout << "FRAGTRAP CALLED" << std::endl;
    _fartAttack = 14;
    _shoeAttack = 17;
    _heartAttack = 100;
    _sleep = 13;
    _KingKong = 34;
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

void    FragTrap::rangedAttack(std::string const & target)
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
void    FragTrap::meleeAttack(std::string const & target)
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

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
    this->_name = rhs.getUnknownPlayer();

    return *this;
}


void    FragTrap::takeDamage(unsigned int amount)
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
void    FragTrap::beRepaired(unsigned int amount)
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
    

#pragma region              Sets and Gets

void            FragTrap::setUnknownPlayer(std::string const _unknownTarget)
{
    this->_name = _unknownTarget;
}

std::string     FragTrap::getUnknownPlayer(void) const
{
    return this->_name;
}


void            FragTrap::set_meleeAttactDamage(int _mad)
{
    this->_meleeAttackDamage = _mad;
}

int     FragTrap::get_meleeAttactDamage(void)
{
    return this->_meleeAttackDamage;
}


void            FragTrap::set_rangedAttackDamage(int _rad)
{
    this->_rangedAttackDamage = _rad;
}

int     FragTrap::get_rangedAttackDamage(void)
{
    return this->_rangedAttackDamage;
}


void            FragTrap::set_armorDamageReduction(int _adr)
{
    this->_armorDamageReduction = _adr;
}

int     FragTrap::get_armorDamageReduction(void)
{
    return this->_armorDamageReduction;
}


#pragma endregion
