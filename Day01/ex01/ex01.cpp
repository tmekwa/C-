/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:36:25 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/06 12:36:30 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak() {
    std::string*        panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;

    delete panthere;
}