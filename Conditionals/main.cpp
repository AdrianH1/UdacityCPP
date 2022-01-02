/*Goal: practice if-else statements in C++
**Write a program to select the best pet.
*/

#include<iostream>

void quizIfElse()
{
	char skin, location;
	std::cout << "Would you like an animal with fur(f), feathers(t), or scales(s)?";
	std::cin >> skin;
	std::cout << skin << "\n";

	if (skin == 'f')
	{
		std::cout << "Get a dog" << "\n";
	}
	else if (skin == 't')
	{
		std::cout << "Get a bird" << "\n";
	}
	else {
		std::cout << "Would you like an animal that lives in water(w), land(l), or both(b)?";
		std::cin >> location;
		std::cout << location << "\n";

		if (location == 'w')
		{
			std::cout << "Get a fish" << "\n";
		}
		else if (location == 'l')
		{
			std::cout << "Get a gecko" << "\n";
		}
		else 
		{
			std::cout << "Get a frog" << "\n";
		}
	}
}

void quizSwitch()
{
	float in1, in2;
	float result = 0;
	char operation;
	std::cout << "Enter two numbers:\n";
	std::cin >> in1;
	std::cin >> in2;
	std::cout << "Enter the operation '+','-','*','/':\n";
	std::cin >> operation;

	switch (operation)
	{
	case '+':
		result = in1 + in2;
		break;
	case '-':
		result = in1 - in2;
		break;
	case '*':
		result = in1 * in2;
		break;
	case '/':
		result = in1 / in2;
		break;
	default:
		std::cout << "Enter valid operation '+','-','*','/'\n";
		break;
	}

	std::cout << in1 << operation << in2 << "=" << result;
}

int main()
{
	//quizIfElse();
	quizSwitch();
	return 0;
}