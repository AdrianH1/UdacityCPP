//header file for main.cpp
/*TODO:
*-  create a class called Pet
*- it inherits from both the class Patient
*- and the class Dog
*- Pet has one private member: name
*- Pet has public getName and setName functions.
*/
#include<iostream>
#include<string>

class Patient
{
private:
    int idNumber;
public:
    void setIdNumber(int idIn);
    int getIdNumber();
};

void Patient::setIdNumber(int idIn)
{
    idNumber = idIn;
}

int Patient::getIdNumber()
{
    return idNumber;
}

class Dog
{
private:
    std::string breed;
public:
    void setBreed(std::string breedIn);
    std::string getBreed();
};

void Dog::setBreed(std::string breedIn)
{
    breed = breedIn;
}

std::string Dog::getBreed()
{
    return breed;
}

class Pet : public Dog, public Patient
{
private:
    std::string name;
public:
    void setName(std::string name);
    std::string getName();
};

void Pet::setName(std::string nameIn)
{
    name = nameIn;
}

std::string Pet::getName()
{
    return name;
}

