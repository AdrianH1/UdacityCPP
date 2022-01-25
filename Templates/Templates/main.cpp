/*Goal: Practice writing generic functions*/

#include "main.hpp"

int main()
{
    int a = 90;
    int b = 1;

    float c = 3.4;
    float d = 4.5;

    std::cout << a << " + " << b << " = " << sumTwo(a, b);
    std::cout << c << " + " << d << " = " << sumTwo(c, d);
    return 0;
}