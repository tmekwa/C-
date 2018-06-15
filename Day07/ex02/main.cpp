/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 14:48:41 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/14 14:48:46 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

int     main( void )
{
    try
    {
        Array<int> test(5);
        Array<int> t;
        t = test;
        Array<int> t2(test);
       // int arr[] = {1, 2, 3, 4, 5};
        t2[5] = 3;
        std::cout << "Index: " << t2[5] << std::endl; 
    }catch (std::exception &e)
    {
        std::cout << e.what() << "\n";
    }
    return 0;
}

// #include "Array.hpp"

// int main()
// {
//     int n;

//     std::cout << "-- Default constructor --" << std::endl;
//     Array<int>    nil;
//     std::cout << "Array<int>    nil" << std::endl;

//     std::cout << "nil: " << nil << std::endl;
//     std::cout << "-- Default constructor --" << std::endl << std::endl;
//     std::cout << "-- Constructor --" << std::endl;

//     Array<int>    arr(5);
//     std::cout << "Array<int>    arr(5)" << std::endl;

//     for (unsigned int i = 0; i < arr.size(); i++)
//     {
//         arr[i] = i;
//     }
//     std::cout << "arr: " << arr << std::endl;
//     std::cout << "-- Constructor --" << std::endl << std::endl;;

//     std::cout << "-- Copy constructor --" << std::endl;
//     Array<int>    cpy(arr);
//     std::cout << "Array<int>    cpy(arr)" << std::endl;
//     std::cout << "cpy: " << cpy << std::endl;
//     cpy[2] = 0;
//     std::cout << "cpy[2] = 0" << std::endl;
//     std::cout << "arr: " << arr << std::endl;
//     std::cout << "cpy: " << cpy << std::endl;
//     std::cout << "-- Copy constructor --" << std::endl << std::endl;
    
//     std::cout << "-- Assignation --" << std::endl;
//     Array<int>    asg;
//     std::cout << "Array<int>    asg" << std::endl;

//     asg = arr;
//     std::cout << "asg = arr" << std::endl;
//     std::cout << "asg: " << asg << std::endl;
//     asg[2] = 0;
//     std::cout << "asg[2] = 0" << std::endl;
//     std::cout << "arr: " << arr << std::endl;
//     std::cout << "asg: " << cpy << std::endl;
//     std::cout << "-- Assignation --" << std::endl << std::endl;

//     std::cout << "-- Assignation (different sizes) --" << std::endl;
//     Array<int>    big(10);
//     std::cout << "Array<int>    big(10)" << std::endl;
//     for (unsigned int i = 0; i < big.size(); i++)
//     {
//         big[i] = i;
//     }
//     std::cout << "big: " << big << std::endl;
//     asg = big;
//     std::cout << "asg = big" << std::endl;
//     std::cout << "asg: " << asg << std::endl;

//     asg[5] = 0;
//     std::cout << "asg[5] = 0" << std::endl;
//     std::cout << "big: " << big << std::endl;
//     std::cout << "asg: " << asg << std::endl;

//     asg = nil;
//     std::cout << "asg = nil" << std::endl;
//     std::cout << "nil: " << nil << std::endl;
//     std::cout << "asg: " << asg << std::endl;
//     std::cout << "-- Assignation (different sizes) --" << std::endl << std::endl;

//     std::cout << "-- Exception --" << std::endl;
//     try
//     {
//         n = nil[0];
//     }
//     catch (std::exception &err)
//     {
//         std::cout << err.what() << std::endl;
//     }
//     try
//     {
//         n = big[10];
//     }
//     catch (std::exception &err)
//     {
//         std::cout << err.what() << std::endl;
//     }
//     try
//     {
//         n = big[-10];
//     }
//     catch (std::exception &err)
//     {
//         std::cout << err.what() << std::endl;
//     }
//     std::cout << "-- Exception --" << std::endl << std::endl;
// }