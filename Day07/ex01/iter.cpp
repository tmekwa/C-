/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 15:16:27 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/13 15:16:29 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T>
void        iter( T *arr, T & len, void (myFunction)() )
{
    while(arr[len])
    {
        (myFunction)();
        len--;
    }
}

void        printMyName()
{
    std::cout << "Thato Mekwa" << std::endl;
    return;
}

int         main( void )
{
    int balance[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int size = 14;

    iter<int>(balance, size, printMyName);
    return 0;
}