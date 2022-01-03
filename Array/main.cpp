#include <iostream>
#include <stdio.h>

#include <iostream>
#include <stdio.h>

void arrayBasic()
{
    int userInput[] = { 43, 32, 21, 23, 43, 98, 90, 65, 53, 42, 69, 79, 82, 7, 1, 63, 64, 90, 87, 96, 4, 55, 3, 7, 2, 1, 67, 89, 543, 567, 985, 34, 975, 890, 4567, 23, 33, 9, 56, 345, 9865 };

    //print the array
    std::cout << "\nThe array\n";
    for (int i = 0; i < 40; i++)
    {
        std::cout << userInput[i] << " ";
    }
    //print the array in reverse order
    std::cout << "\n\nThe array in reverse order\n";
    for (int i = 39; i >= 0; i--)
    {
        std::cout << userInput[i] << " ";
    }
    //sorting the array
    for (int i = 0; i < 40; i++)
    {
        for (int j = 0; j < 39 - i; j++)
        {
            if (userInput[j] > userInput[j + 1])
            {
                int temp;
                temp = userInput[j];
                userInput[j] = userInput[j + 1];
                userInput[j + 1] = temp;
            }
        }
    }
    std::cout << "\n\nThe array sorted\n";
    for (int i = 0; i < 40; i++)
    {
        std::cout << userInput[i] << " ";
    }
}



int main()
{
    arrayBasic();
    return 0;
}