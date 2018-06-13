#include <iostream>
#include <string>

#pragma region Ref2

void    byPtr(std::string* str)
{
    *str += " and ponies (PTR)";
}

void    byConstPtr(std::string const * str)
{
    std::cout << *str << std::endl;
}

void    byRef(std::string& str)
{
    str += " and ponies (REF)";
}

void    byConstRef(std::string const & str)
{
    std::cout << str << std::endl;
}

int main(void)
{
    std::string str = "i like butterflies";

    std::cout << str << std::endl;

    byPtr(&str);
    byConstPtr(&str);

    str = "i like horses";

    std::cout << str << std::endl;
    byRef(str);
    byConstRef(str);

    return 0;
    
}

#pragma endregion