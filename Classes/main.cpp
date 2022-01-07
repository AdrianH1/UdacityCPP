#include "Dog.h"
#include "Cat.h"
#include "Gameboard.h"

int main()
{
	//Dog dog1;
	//Dog dog2;

	//dog1.setName("Trixie");
	//dog1.setLicenseNumber(1234);
	//dog2.setName("Kali");
	//dog2.setLicenseNumber(5678);
	//
	//dog1.printInfo();
	//std::cout << "\n";
	//dog2.printInfo();
	//std::cout << "\n";

	//Cat cat1, cat2;
	//cat1.setName("Kimmy");
	//cat2.setName("Bobby");
	//cat1.setBreed("calico");
	//cat2.setBreed("main coon");
	//cat1.setAge(4);
	//cat2.setAge(1);

	//cat1.printInfo();
	//cout << "\n";
	//cat2.printInfo();

	Gameboard game1;
	game1.setGameSpace(0, 0, 'x');
	game1.setGameSpace(0, 1, 'x');
	game1.setGameSpace(0, 2, 'x');
	game1.setGameSpace(0, 3, 'y');
	game1.setGameSpace(1, 0, 'x');
	game1.setGameSpace(2, 0, 'x');
	game1.setGameSpace(3, 0, 'x');
	game1.setGameSpace(3, 1, 'x');
	game1.setGameSpace(3, 2, 'x');
	game1.setGameSpace(3, 3, 'x');

	if (game1.fourInRow() == 1)
	{
		cout << "X got four in a row! \n\n";
	}
	else
	{
		cout << "X did not get four in a row :(\n\n";
	}
	game1.printInfo();

	return 0;
}