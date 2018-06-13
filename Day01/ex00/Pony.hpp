/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 09:53:16 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/06 09:53:19 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PONY_H
#define PONY_H

#include <iostream>
#include <string>
 
void ponyOnTheHeap(void);
void ponyOnTheStack(void);

class Pony{
    private:
            std::string color;
            std::string hair;
            std::string tail;
            std::string eyes;

    public:
            Pony(std::string cl, std::string hr, std::string tl, std::string eys);
            ~Pony();
};

#endif