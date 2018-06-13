/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 09:53:03 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/06 09:53:07 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Pony.hpp"

Pony::Pony(std::string cl, std::string hr, std::string tl, std::string eys)
{
    std::cout <<  "Pony attributes, color: " << cl << ", hair: " << hr << ", tail: " << tl << ", eyes: " << eys << std::endl; 
    this->color = cl;
    this->hair = hr;
    this->tail = tl;
    this->eyes = eys;
}

void    ponyOnTheHeap(void)
{
   Pony *newPony = new Pony("Pink", "Blond", "Long", "Blue");
   delete newPony;
}

void    ponyOnTheStack(void)
{
   Pony newPony = Pony("Lightblue", "Black", "Short", "Green");    
}

Pony::~Pony(){

}