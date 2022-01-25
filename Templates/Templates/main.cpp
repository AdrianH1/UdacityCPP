/*Goal: Practice writing generic functions*/

#include "main.hpp"

int main()
{
    int a = 90;
    int b = 1;

    float c = 3.4;
    float d = 4.5;

    std::cout << a << " + " << b << " = " << sumTwo(a, b) << std::endl;
    std::cout << c << " + " << d << " = " << sumTwo(c, d) << std::endl;
    std::cout << a << " or " << c << " bigger is: " << getBigger(a, c);
    
    return 0;
}