#include <iostream>
#include <string>


#pragma region Ref_1

int main(void)
{
    int     numberOfBalls = 42;

    int*    ballsPtr = &numberOfBalls;
    int&    ballsRef = numberOfBalls;

    std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

    *ballsPtr = 21;
    std:: cout << numberOfBalls << std::endl;
    ballsRef = 84;
    std:: cout << numberOfBalls << std::endl;

    return (0); 
}

#pragma endregion


#