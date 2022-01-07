#include<iostream>

using namespace std;

class Dog
{
    string name;
    int licenseNumber;

public:
    Dog();
    void setName(string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    string getName();
    int getLicenseNumber();
    void printInfo();
    void printRoster(Dog roster[], int size);
};

Dog::Dog()
{
    name = "Unknown";
}

void Dog::setName(string nameIn)
{
    name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
}

string Dog::getName()
{
    return name;
}

int Dog::getLicenseNumber()
{
    return licenseNumber;
}

void Dog::printInfo()
{
    std::cout << name << " " << licenseNumber;
}

void printRoster(Dog roster[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << roster[i].getName() << " " << roster[i].getLicenseNumber() << "\n";
    }
}



