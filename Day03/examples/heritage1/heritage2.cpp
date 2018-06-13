/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage2.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 07:09:55 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/08 07:09:59 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>

class Animal
{
    public:
            Animal();
            Animal(Animal const &);
            Animal & operator=( Animal const &);
            ~Animal();

            void    run(int distance);
            void    call();
            void    eat(std::string const & what);
            void    walk(int distance);

    private:
            int _numberOfLegs;
};

class Otter : public Animal
{
    public:
            Otter();
            Otter(Cat const &);
            Otter & operator=( Otter const &);
            ~Otter();

    private:
            int _numberOfLegs;
};

class Cat : public Animal
{
    public:
            Cat();
            Cat(Cat const &);
            Cat & operator=( Cat const &);
            ~Cat();

            void    run(int distance);

            void    scornSomeone(std::string const & target);
            
    private:
            int _numberOfLegs;
};

class Pony : public Animal
{
    public:
            Pony();
            Pony(Pony const &);
            Pony & operator=( Pony const &);
            ~Pony();

            void    run(int distance);

            void    doMagic(std::string const & target);
            
    private:
            int _numberOfLegs;
};