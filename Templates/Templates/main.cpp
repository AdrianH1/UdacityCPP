/*Goal: Practice writing generic functions*/

#include "main.hpp"
#include "Multiplier.hpp"

int main()
{
    int a = 90;
    int b = 1;

    float c = 3.4;
    float d = 4.5;

    std::cout << a << " + " << b << " = " << sumTwo(a, b) << std::endl;
    std::cout << c << " + " << d << " = " << sumTwo(c, d) << std::endl;
    std::cout << a << " or " << c << " bigger is: " << getBigger(a, c)  << std::endl;

    /*-------------------------------------------------*/

    Multiplier<int> multi1;
    Multiplier<float> multi3;

    int input1, input2;
    std::cin >> input1;
    std::cin >> input2;

    multi1.setM1(input1);
    multi1.setM2(input2);
    multi1.setProduct();
    multi1.printEquation();

    std::cout << "\n";
    float input3, input4;
    std::cin >> input3;
    std::cin >> input4;
    multi3.setM1(input3);
    multi3.setM2(input4);
    multi3.setProduct();
    multi3.printEquation();
    
    return 0;
}