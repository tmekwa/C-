/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 07:43:43 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/09 07:43:45 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ACharacter
{
    public:
            virtual void    attack(std::string const & target) = 0;            
            void    sayHello(std::string const & target);
};

class Warrior : public ACharacter
{
    public:
            void    attack(std::string const & target);
};

class ICoffeeMaker
{
    public:
            virtual void        fillWaterTank(IWaterSource * src) = 0;
            virtual ICoffee*    makeCoffee(std::string const & type) = 0;
};

void    Character::sayHello(std::string const & target)
{
    std::cout << "Hello " << target << " !" << std::endl;
}

void    Warrior::sayHello(std::string const & target)
{
    std::cout << "F*** off " << target << ", I don't like you !" << std::endl;
}


int main()
{
    Warrior* a = new Warrior();

    Character* b = new Warrior();

    a->sayHello("Student");

    b->sayHello("Student");

    return (0);
}
