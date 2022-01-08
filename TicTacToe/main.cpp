#include "Gameboard.h"
#include "Player.h"

int main()
{
	Gameboard game;
	Player player1;
	Player player2;

	player1.setPlayer("Adrian", 'x');
	player2.setPlayer("Tobias", 'o');

	game.setGameSpace(0, 0, 'x');
	game.setGameSpace(0, 3, 'o');
	game.setGameSpace(1, 1, 'x');
	game.setGameSpace(3, 2, 'o');
	game.setGameSpace(2, 2, 'x');
	game.setGameSpace(1, 3, 'o');
	game.setGameSpace(3, 3, 'x');
	game.setGameSpace(1, 2, 'o');

	//game.setGameSpace(0, 3, 'x');
	//game.setGameSpace(1, 2, 'x');
	//game.setGameSpace(2, 1, 'x');
	//game.setGameSpace(3, 0, 'x');

	//game.setGameSpace(1, 0, 'x');
	//game.setGameSpace(1, 1, 'x');
	//game.setGameSpace(1, 2, 'x');
	//game.setGameSpace(1, 3, 'x');

	//game.setGameSpace(0, 2, 'x');
	//game.setGameSpace(1, 2, 'x');
	//game.setGameSpace(2, 2, 'x');
	//game.setGameSpace(3, 2, 'x');

	game.printSpace();

	if (game.checkWinner() == 'x') {
		std::cout << "Player: " << player1.getPlayer() << " won";
	} else {
		std::cout << "Player: " << player2.getPlayer() << " won";
	}

	return 0;
}