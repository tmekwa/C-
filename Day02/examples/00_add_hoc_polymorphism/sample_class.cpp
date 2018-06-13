#include "sample_class.hpp"

Sample::Sample()
{
    std::cout << "Sample Class Constructor Is Called" << std::endl;
}

Sample::~Sample()
{
    std::cout << "Sample Class Destructor Is Called" << std::endl;
}

void Sample::bar(char const c) const
{
    std::cout << "called with char overload " << c << std::endl;
    return;
}

void Sample::bar(int const n) const
{
    std::cout << "called with int overload " << n << std::endl;
    return;
}

void Sample::bar(float const z) const
{
    std::cout << "called with float overload " << z << std::endl;
    return;
}

void Sample::bar(Sample const & i)
{
    (void)i;
    std::cout << "called with Sample overload" << std::endl;
    return;
}