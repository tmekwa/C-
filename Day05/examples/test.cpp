#include <iostream>
#include <fstream>


int main()
{
    std::ifstream ifs("numbers");
    unsigned int dst;
    unsigned int dst2;

    ifs >> dst >> dst2;

    std::cout << dst << " " << dst2 << std::endl;
    ifs.close();


    std::ofstream ofs("test.out");
    ofs << "\n" <<
    "                    ,@@@@@@@,                        "
    "\n            ,,,.   ,@@@@@@/@@,  .oo8888o.          " 
    "\n         ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o     "
    "\n        ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'     "
    "\n       %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'       "
    "\n        %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'       "
    "\n        `&%\\ ` /%&'    |.|        \\ '|8'         "
    "\n            |o|        | |         | |             "
    "\n            |.|        | |         | |             "
    "\n            \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
    ofs.close();

}