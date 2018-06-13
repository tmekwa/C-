#include <iostream>

class Number{

    private:
            int number;
    
    public:
            void setNumber(int num)
            {
                this->number = num;
            }
            int getNumber(void)
            {
                return number;
            }
};

int     main()
{
    Number objectOfClass = Number();

    objectOfClass.setNumber(78);

    std::cout << "Your number is: " << objectOfClass.getNumber() << std::endl;

    return 0;
}