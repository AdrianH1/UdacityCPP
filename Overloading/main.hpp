#include <iostream>

class Compare
{
public:
	int findSmaller(int input1, int input2);
	int findSmaller(int input1, int input2, int input3);
	float findSmaller(float input1, float input2);
	float findSmaller(float input1, float input2, float input3);
	char findSmaller(char input1, char input2);
	char findSmaller(char input1, char input2, char input3);
	int findSmaller(int arrayInt[5], int size);
	float findSmaller(float arrayInF[4], int size);
	char findSmaller(char arrayInC[6], int size);
};

int Compare::findSmaller(int input1, int input2)
{
	if (input1 < input2)
		return input1;
	return input2;
}


int Compare::findSmaller(int input1, int input2, int input3)
{
	if (input1 < input2 && input1 < input3)
		return input1;
	else if (input2 < input1 && input2 < input3)
		return input2;
	return input2;
}

float Compare::findSmaller(float input1, float input2)
{
	if (input1 < input2)
		return input1;
	return input2;
}

float Compare::findSmaller(float input1, float input2, float input3)
{
	if (input1 < input2 && input1 < input3)
		return input1;
	else if (input2 < input1 && input2 < input3)
		return input2;
	return input3;
}

char Compare::findSmaller(char input1, char input2)
{
	if (input1 < input2)
		return input1;
	return input2;
}

char Compare::findSmaller(char input1, char input2, char input3)
{
	if (input1 < input2 && input1 < input3)
		return input1;
	else if (input2 < input1 && input2 < input3)
		return input2;
	return input3;
}

int Compare::findSmaller(int arrayInt[5], int size)
{
	int smallest = arrayInt[0];
	for (int i = 0; i < size; i++)
	{
		if (arrayInt[i] < smallest)
			smallest = arrayInt[i];
	}
	return smallest;
}

float Compare::findSmaller(float arrayInF[4], int size)
{
	float smallest = arrayInF[0];
	for (int i = 0; i < size; i++)
	{
		if (arrayInF[i] < smallest)
			smallest = arrayInF[i];
	}
	return smallest;
}

char Compare::findSmaller(char arrayInC[6], int size)
{
	char smallest = arrayInC[0];
	for (int i = 0; i < size; i++)
	{
		if (arrayInC[i] < smallest)
			smallest = arrayInC[i];
	}
	return smallest;
}