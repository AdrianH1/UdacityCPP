#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<float> vIn);

void printVector(vector<float> vIn)
{//printing the contents of vIns
   //TODO: Complete the function 
	std::vector<float>::iterator it;
	for (it = vIn.begin(); it != vIn.end(); it++)
		std::cout << *it << ", ";
}

/*-----------------------------*/

void printVector(vector<int> vIn);
void assignFunction(vector<int> vInts, int in);
void pushBackFunction(vector<int> vInts, int in);
void emplaceFunction(vector<int> vInts, int loc, int in);

void printVector(vector<int> vIn)
{//printing the contents of vIns
 //TODO: Finish the function
    std::vector<int>::iterator it;
    for (it = vIn.begin(); it != vIn.end(); it++)
        std::cout << *it << " ";
}

void assignFunction(vector<int> vInts, int in)
{
    cout << "\nassigning " << in << " and printing the vector\n";
    //TODO: Finish the function
    vInts.assign(10, in);
    printVector(vInts);
}
void pushBackFunction(vector<int> vInts, int in)
{
    cout << "\npush back " << in << " and printing the vector\n";
    //TODO: Finish the function
    vInts.push_back(in);
    printVector(vInts);
}
void emplaceFunction(vector<int> vInts, int loc, int in)
{
    vector<int>::iterator it;
    cout << "\nemplacing " << in << " and printing the vector\n";
    //TODO: Finish the function
    it = vInts.begin() + loc;
    vInts.emplace(it, in);
    printVector(vInts);
}
