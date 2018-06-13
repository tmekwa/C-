
#include <stdexcept>
#include <iostream>

void    test1()
{    
    try
    {
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

void    test2()
{    
    // /* code */
    // if (/* condition */) {
    //     /* code */
    // }
    // else {
    //     /* code */
    // }
}

void    test3()
{
    
    try
    {
        test2();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

void    test4()
{
    class PEBKACException : public std::exception
    {
        public:
                const char * what() throw()
                {
                    return ("Problem exists between keyboard and chair");
                }
    };
    try
    {
        test3();
    }
    catch(PEBKACException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(std::string & e)
    {
        std::cout << "Exception sorry!!" << std::endl;
    }    
}