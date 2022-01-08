
#include <iostream>

void setGameSpace(int row, int column, char value);
char getGameSpace(int row, int column);
char checkWinner();
void printSpace();

void setGameSpace(int row, int column, char value)
{
	gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row, int column)
{
	return gameSpace[row][column];
}

char Gameboard::checkWinner()
{
	char c = '-';
	int count = 0;
	for (int i = 0; i < SPACESIZE; i++)
	{
		for (int j = 0; j < SPACESIZE; j++)
		{
			if (gameSpace[i][j] == c)
			{
				count++;
				continue;
			}
			c = gameSpace[i][j];
		}
		if (count == 4)
			return c;
		c = '-';
	}
	return 1;
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