/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 07:01:37 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/08 07:01:42 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>

class Cat
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

class Pony
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

