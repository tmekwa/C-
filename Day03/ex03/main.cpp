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
#include "NinjaTrap.hpp"

int main(void)
{
    ClapTrap obj1("Thato");
    FragTrap obj2("Zombie");
    ScavTrap obj3("Crack");
    NinjaTrap obj("Lom");
    //Round 1

    obj.ninjaShoebox(obj);
    obj.ninjaShoebox(obj1);
    obj.ninjaShoebox(obj2);
    obj.ninjaShoebox(obj3);
        

    return 0;
}