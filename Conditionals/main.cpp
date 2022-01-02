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

void quizForLoop()
{
	float sum = 0, avg = 0;
	for (int i = 0; i < 5; i++)
	{
		int tmp = 0;
		std::cin >> tmp;
		sum += tmp;
	}
	avg = sum / 5;
	std::cout << "Summe: " << sum;
	std::cout << "Average: " << avg;
}

void quizWhileLoop()
{
	//use 55 as the number to be guessed
	int target = 55;
	int guess = -1;
	while (guess != target)
	{
		std::cout << "Guess a number between 0 and 100: ";
		std::cin >> guess;
		std::cout << guess << "\n";
		if (guess > target)
			std::cout << "Your guess is too high\n";
		else if (guess < target)
			std::cout << "Your guess is too low\n";
		else
			std::cout << "You guessed the target!\n";

		//Note I had to use double quotes around "q"
		//because it is a string
		if (guess == -1)
		{
			std::cout << "good bye!";
			break;
		}
	}

}

void exitingLoops()
{
	int a = 0;
	while (a < 5)
	{
		std::cout << "a = " << a << "\n";
		a++;
		if (a == 3)
			break;
	}
	std::cout << "The first statement after the first while loop\n\n";


	while (a < 15)
	{
		a++;
		if (a == 10)
		{
			std::cout << "\tWhen a=10, go back to the top of the loop";
			std::cout << "\n\tThis means a=10 is skipped.\n";
			continue;
		}
		std::cout << "After continue a = " << a << "\n";
	}
}

int main()
{
	//quizIfElse();
	//quizSwitch();
	//quizForLoop();
	//quizWhileLoop();
	exitingLoops();

	return 0;
}