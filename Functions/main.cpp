#include "main.h"

void increment(int& input); //Note the addition of '&'

int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;

    //call the function
    printProduct(m1, m2, product);

    printEquation(m1, m2, sum(m1, m2), '+');

    std::cout << "\n";

    int a = 34;
    std::cout << "Before the function call a = " << a << "\n";
    increment(a);
    std::cout << "After the function call a = " << a << "\n";

    char operation = '*';
    float input1 = 9.8;
    float input2 = 2.3;
    float result;

    calculate(input1, input2, operation, result);
    printEquation(input1, input2, operation, result);

    std::cout << "\n";

    const int size = 4;
    int array[] = { 345,75896,2,543 };
    int searchKey = 543;
    std::cout << "Found at: " << search(array, size, searchKey);

    return 0;
}

void increment(int& input) //Note the addition of '&'
{
    input++; //**Note the LACK OF THE addition of '&'**
    std::cout << "In the function call a = " << input << "\n";
}