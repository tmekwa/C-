
#include <iostream>

int main(void)
{
    int * a = new int();
    *a = 1;

    std::cout << "Display a* :" << *a;
    return 0;
}
