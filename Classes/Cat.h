#include <iostream>

using namespace std;

class Cat
{
	string name;
	string breed;
	int age;

public:
	void setName(string name);
	void setBreed(string breed);
	void setAge(int age);
	string getName();
	string getBreed();
	int getAge();
	void printInfo();
};

void Cat::setName(string name)
{
	Cat::name = name;
}

void Cat::setBreed(string breed)
{
	Cat::breed = breed;
}

void Cat::setAge(int age)
{
	Cat::age = age;
}

string Cat::getName()
{
	return name;
}

string Cat::getBreed()
{
	return breed;
}

int Cat::getAge()
{
	return age;
}

void Cat::printInfo()
{
	cout << name << " " << breed << " " << age;
}

