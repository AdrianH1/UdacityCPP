
#include <iostream>

void printProduct(int m1, int m2, int product);
void printEquation(int m1, int m2, int sum, char operation);
int sum(int m1, int m2);
void calculate(float input1, float input2, char operation, float& result);
void printEquation(float input1, float input2, char operation, float result);
int search(int* array, int size, int searchKey);


void printProduct(int m1, int m2, int product)
{
    std::cout << m1 << "*" << m2 << " = " << product << " \n";
}

void printEquation(int m1, int m2, int sum, char operation)
{
    std::cout << m1 << operation << m2 << "=" << sum;
}

int sum(int m1, int m2)
{
    return m1 + m2;
}

void calculate(float input1, float input2, char operation, float &result)
{
    switch (operation)
    {
    case '+': result = input1 + input2;
        break;
    case '-': result = input1 - input2;
        break;
    case '*': result = input1 * input2;
        break;
    case '/': result = input1 / input2;
        break;
    default:  std::cout << "Illegal operation\n";
    }
}
void printEquation(float input1, float input2, char operation, float result)
{
    std::cout << input1 << operation << input2 << "=" << result;
}

int search(int *array, int size, int searchKey)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == searchKey) { return i; };
    }
    return -1; 
}