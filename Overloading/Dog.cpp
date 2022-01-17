#include "Dog.hpp"

int main()
{
	Dog d1;
	Dog d2("Kali");
	Dog d3(12345);
	Dog d4("Sammy", 65432);

	cout << d1.getName() << " " << d1.getLicense() << endl;
	cout << d2.getName() << " " << d2.getLicense() << endl;
	cout << d3.getName() << " " << d3.getLicense() << endl;
	cout << d4.getName() << " " << d4.getLicense() << endl;
	return 0;
}

