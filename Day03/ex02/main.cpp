/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 07:42:11 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/08 07:42:14 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


int main(void)
{
    FragTrap obj1("Thato");
    FragTrap obj2("Korg");

    ScavTrap obj3("Killer");
    ScavTrap obj4("Montage");
    //Round 1
    obj1.rangedAttack(obj2.getUnknownPlayer());
    obj2.takeDamage(obj1.get_rangedAttackDamage());
    obj2.meleeAttack(obj1.getUnknownPlayer());
    obj1.takeDamage(obj2.get_meleeAttactDamage());

    obj1.rangedAttack(obj2.getUnknownPlayer());
    obj2.takeDamage(obj1.get_rangedAttackDamage());

    obj2.meleeAttack(obj1.getUnknownPlayer());
    obj1.takeDamage(obj2.get_meleeAttactDamage());
    
    obj1.rangedAttack(obj2.getUnknownPlayer());
    obj2.takeDamage(obj1.get_rangedAttackDamage());

    obj2.meleeAttack(obj1.getUnknownPlayer());
    obj1.takeDamage(obj2.get_meleeAttactDamage());

    obj1.rangedAttack(obj2.getUnknownPlayer());
    obj2.takeDamage(obj1.get_rangedAttackDamage());

    obj2.meleeAttack(obj1.getUnknownPlayer());
    obj1.takeDamage(obj2.get_meleeAttactDamage());
    obj1.vaulthunter_dot_exe(obj2.getUnknownPlayer());

    std::cout << '\n';

    obj4.challengeNewcomer(obj3.getUnknownPlayer());
    
    obj4.rangedAttack(obj3.getUnknownPlayer());
    obj3.takeDamage(obj4.get_rangedAttackDamage());
    obj3.meleeAttack(obj4.getUnknownPlayer());
    obj4.takeDamage(obj3.get_meleeAttactDamage());

    obj4.rangedAttack(obj3.getUnknownPlayer());
    obj3.takeDamage(obj4.get_rangedAttackDamage());

    obj3.meleeAttack(obj4.getUnknownPlayer());
    obj4.takeDamage(obj3.get_meleeAttactDamage());
    
    obj4.rangedAttack(obj3.getUnknownPlayer());
    obj3.takeDamage(obj4.get_rangedAttackDamage());

    obj3.meleeAttack(obj4.getUnknownPlayer());
    obj4.takeDamage(obj3.get_meleeAttactDamage());

    obj4.rangedAttack(obj3.getUnknownPlayer());
    obj3.takeDamage(obj4.get_rangedAttackDamage());

    obj3.meleeAttack(obj4.getUnknownPlayer());
    obj4.takeDamage(obj3.get_meleeAttactDamage());


    return 0;
}