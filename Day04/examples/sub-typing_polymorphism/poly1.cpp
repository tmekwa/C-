/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 07:20:21 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/09 07:20:37 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Character
{
    public:
            virtual void    sayHello(std::string const & target);
};

class Warrior : public Character
{
    public:
            void    sayHello(std::string const & target);
};

class Cat
{
    //[...]
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