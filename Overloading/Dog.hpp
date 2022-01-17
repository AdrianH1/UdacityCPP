#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
	string name;
	int licenseNr;
public:
	Dog();
	Dog(string name);
	Dog(int licenseNr);
	Dog(string name, int licenseNr);
	string getName();
	int getLicense();
};

Dog::Dog()
{
	this->name = "NA";
	this->licenseNr = 0;
}

Dog::Dog(string name)
{
	this->name = name;
	this->licenseNr = 0;
}

Dog::Dog(int licenseNr)
{
	this->name = "NA";
	this->licenseNr = licenseNr;
}

Dog::Dog(string name, int licenseNr)
{
	this->name = name;
	this->licenseNr = licenseNr;
}

string Dog::getName()
{
	return name;
}

int Dog::getLicense()
{
	return licenseNr;
}

