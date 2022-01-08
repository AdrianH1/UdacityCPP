#include <iostream>

class Gameboard
{
	const int SPACESIZE = 4;
	char gameSpace[4][4];

public:
	Gameboard();
	void setGameSpace(int row, int column, char value);
	char getGameSpace(int row, int column);
	char checkWinner();
	void printSpace();
};

Gameboard::Gameboard()
{
	for (int i = 0; i < SPACESIZE; i++)
		for (int j = 0; j < SPACESIZE; j++)
			gameSpace[i][j] = '-';
}


void Gameboard::setGameSpace(int row, int column, char value)
{
	gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row, int column)
{
	return gameSpace[row][column];
}

char Gameboard::checkWinner()
{
	int countX = 0;
	int countO = 0;
	//Check horizontal 
	for (int i = 0; i < SPACESIZE; i++)
	{
		countX = 0;
		countO = 0;
		for (int j = 0; j < SPACESIZE; j++)
		{
			if (gameSpace[i][j] == 'x')
				countX++;
			if (gameSpace[i][j] == 'o')
				countO++;
		}
		if (countX == 4)
			return 'x';
		if (countO == 4)
			return 'o';
	}

	//Check vertical
	for (int i = 0; i < SPACESIZE; i++)
	{
		countX = 0;
		countO = 0;
		for (int j = 0; j < SPACESIZE; j++)
		{
			if (gameSpace[j][i] == 'x')
				countX++;
			if (gameSpace[j][i] == 'o')
				countO++;
		}
		if (countX == 4)
			return 'x';
		if (countO == 4)
			return 'o';
	}

	//Check diagonal
	countX = 0;
	countO = 0;
	for (int i = 0; i < SPACESIZE; i++)
	{
			if (gameSpace[i][i] == 'x')
				countX++;
			if (gameSpace[i][i] == 'o')
				countO++;
	}
	if (countX == 4)
		return 'x';
	if (countO == 4)
		return 'o';

	countX = 0;
	countO = 0;
	int j = 3;
	for (int i = 0; i < SPACESIZE; i++)
	{
		if (gameSpace[i][j] == 'x')
			countX++;
		if (gameSpace[i][j] == 'o')
			countO++;
		j--;
	}
	if (countX == 4)
		return 'x';
	if (countO == 4)
		return 'o';

	return '-';
}

void Gameboard::printSpace()
{
	for (int i = 0; i < SPACESIZE; i++)
	{
		for (int j = 0; j < SPACESIZE; j++)
			std::cout << gameSpace[i][j];
		std::cout << "\n";
	}
}