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

void multiDimensional() 
{
    int array2Dim[2][3] = { 0,1,2,3,4,5 };
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            std::cout << "array2Dim[" << i << "][" << j << "] = " << array2Dim[i][j] << "\n";
}

void multiQuiz() {
    int multiArr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int arrResult[4][4];
    int arr[4] = { 10,20,30,40 };

    for (int i = 0; i < 4; i++)
    { 
        for (int j = 0; j < 4; j++)
        {
            arrResult[i][j] = multiArr[i][j] * arr[j];
            std::cout << "array[" << i << "][" << j << "] = " << arrResult[i][j] << "\n";
        }
    }
}

void multiSolution()
    {
        //array dimensions must be known at compile time
        //so I used const int to set the row and col numbers
        const int row = 4;
        const int col = 4;

        int arr[row][col];
        int vector[row], product[row];
        int sum;

        //get the values for the array from the user
        for (int i = 0; i < row; i++)
            for (int j = 0; j < row; j++)
            {
                std::cout << "arr[" << i << "][" << j << "] = \n";
                std::cin >> arr[i][j];
                //std::cout<<"arr["<<i<<"]["<<j<<"] ="<<arr[i][j]<<"\n";
            }

        //getting the values for the vector from the user
        for (int i = 0; i < row; i++)
        {
            std::cout << "vector[" << i << "] = \n";
            std::cin >> vector[i];
            //std::cout<<"vector["<<i<<"] = "<<vector[i]<<"\n";
        }
        sum = 0;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < row; j++)
            {
                sum = (arr[i][j] * vector[i]) + sum;
            }
            product[i] = sum;
            sum = 0;
        }

        for (int i = 0; i < row; i++)
        {
            std::cout << "product[" << i << "] = " << product[i] << "\n";
        }
}

int main()
{
    //arrayBasic();
    //multiDimensional();
    //multiQuiz();
    multiSolution();
    return 0;
}