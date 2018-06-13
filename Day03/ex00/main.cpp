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

int main(void)
{
    FragTrap obj1("Thato");
    FragTrap obj2("Korg");

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

    return 0;
}