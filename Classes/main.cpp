#include "Dog.h"
#include "Cat.h"

int main()
{
	Dog dog1;
	Dog dog2;

	dog1.setName("Trixie");
	dog1.setLicenseNumber(1234);
	dog2.setName("Kali");
	dog2.setLicenseNumber(5678);
	
	dog1.printInfo();
	std::cout << "\n";
	dog2.printInfo();
	std::cout << "\n";

	Cat cat1, cat2;
	cat1.setName("Kimmy");
	cat2.setName("Bobby");
	cat1.setBreed("calico");
	cat2.setBreed("main coon");
	cat1.setAge(4);
	cat2.setAge(1);

	cat1.printInfo();
	cout << "\n";
	cat2.printInfo();


	return 0;
}