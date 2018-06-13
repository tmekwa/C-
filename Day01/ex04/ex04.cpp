/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 17:18:18 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/06 17:18:21 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(void)
{
    std::string myStr =  "HI THIS IS BRAIN";
    std::string *ptr = &myStr;
    std::string &ref = myStr;

    std::cout << "Pointer : " << *ptr << std::endl;

    std::cout << "Reference : " << ref << std::endl;
    return 0;
}