/*This program accepts inputs from the input.txt file*/

#include <iostream>
#include <string>
#include <sstream>


//int main()
//{
//    int year = 0;
//    int age = 0;
//    std::string name = " ";
//    //print a message to the user
//    std::cout << "What year is your favorite? ";
//
//    //get the user response and assign it to the variable year
//    std::cin >> year;
//
//    //output response to user
//    std::cout << "How interesting, your favorite year is " << year << "!\n";
//
//    //print a message to the user
//    std::cout << "At what age did you learn to ride a bike? ";
//
//    //get the user response and assign it to the variable age
//    std::cin >> age;
//
//    //output response to user
//    std::cout << "How interesting you learned to ride at " << age << "!\n";
//
//    std::cout << "What is your name? ";
//    std::cin >> name;
//    std::cout << "Hello " << name << " !\n";
//    return 0;
//}

//int main()
//{
//    std::string name;
//    std::string address;
//    std::string phonenumber;
//
//    std::cout << "What is your name?";
//    std::getline(std::cin, name);
//
//    std::cout << "What is your address?";
//    std::getline(std::cin, address);
//
//    std::cout << "What is your phonenumber?";
//    std::getline(std::cin, phonenumber);
//
//    std::cout << name << "\t" << address << "\t" << phonenumber;
//}

int main()
{
	std::string inLength, inWwidth;

	float length, width, area;

	std::cout << "What's the length of the room?";
	std::getline(std::cin, inLength);

	std::cout << "What's the width of the room?";
	std::getline(std::cin, inWwidth);

	std::stringstream(inLength) >> length;
	std::stringstream(inWwidth) >> width;

	area = length * width;
	std::cout << area;
}