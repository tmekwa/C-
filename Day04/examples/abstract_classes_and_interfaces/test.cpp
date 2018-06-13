/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 09:21:43 by tmekwa            #+#    #+#             */
/*   Updated: 2018/06/09 09:22:11 by tmekwa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>

using namespace std;

int main()
{
    cout << "Press any key! CTRL-D to end" << endl;
    while(1)
    {
        unsigned char x = _getch();
        if (0 == x)
        {
            printf("Function key!\n");
            x = _getch();
        }
        printf("key = %02x\n", x);
        if (x == 4) break;
    }
    return 0;
}
