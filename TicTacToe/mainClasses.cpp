class Gameboard
{
	const int SPACESIZE = 4;
	char gameSpace[4][4];

public:
	Gameboard();
};

Gameboard::Gameboard()
{
	for (int i = 0; i < SPACESIZE; i++)
		for (int j = 0; j < SPACESIZE; j++)
			gameSpace[i][j] = '-';
}