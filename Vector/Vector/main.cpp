#include <vector>
#include <iostream>
#include "main.hpp"

int main()
{
	std::vector<float> vecfloat;
	std::cout << "vector has " << vecfloat.size() << " elements" << std::endl;;
	vecfloat.resize(10);
	std::cout << "vector has " << vecfloat.size() << " elements" << std::endl;

	/*---------------------------------------------------*/

	std::vector<float> vFloat;

	std::cout << "vFloat has " << vFloat.size() << " elements\n";

	std::cout << "\n\nAdding 10 elements to the vector\n";

	vFloat.assign(10, 8.8);

	std::cout << "vFloat has " << vFloat.size() << " elements\n";

	printVector(vFloat);

	/*---------------------------------------------------*/

	vector<int> vInts;
	vInts.assign(10, 5);
	printVector(vInts);
	assignFunction(vInts, 1);
	pushBackFunction(vInts, 2);
	emplaceFunction(vInts, 1, 3);
	cout << endl;

	/*---------------------------------------------------*/

	vector<int> vectorInts;
	vectorInts.push_back(0);
	vectorInts.push_back(1);
	vectorInts.push_back(2);
	vectorInts.push_back(3);
	vectorInts.push_back(4);
	vectorInts.push_back(5);
	vectorInts.push_back(6);
	vectorInts.push_back(7);
	printVector(vectorInts);
	cout << endl;

	vectorInts.erase(vectorInts.begin() + 1, vectorInts.begin() + 3);
	printVector(vectorInts);
	cout << endl;

	vectorInts.pop_back();
	printVector(vectorInts);
	cout << endl;

	vectorInts.clear();
	printVector(vectorInts);


	return 0;
}