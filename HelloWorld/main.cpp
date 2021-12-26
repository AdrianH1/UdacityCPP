#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;
	
	int var = 123;

	std::cout << "Hello World!" << "\n";
	std::cout << 23 << "\n";
	std::cout << "The value of var is " << var << "\n\n";

	cout << "int size = " << sizeof(int) << endl;
	cout << "short size = " << sizeof(short) << endl;
	cout << "long size = " << sizeof(long) << endl;
	cout << "char size = " << sizeof(char) << endl;
	cout << "float size = " << sizeof(float) << endl;
	cout << "double size = " << sizeof(double) << endl;
	cout << "bool size = " << sizeof(bool) << endl;

	//define MONTHS as having 12 possible values
	enum MONTH { Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };

	//define bestMonth as a variable type MONTHS
	MONTH bestMonth;

	//assign bestMonth one of the values of MONTHS
	bestMonth = Jan;

	//now we can check the value of bestMonths just 
	//like any other variable
	if (bestMonth == Jan)
	{
		cout << "I'm not so sure January is the best month\n";
	}

	//using iomanip to set width between text. 3 letters for int therefore 7 chars between int and float
	cout << "int" << setw(10) << "float" << setw(10) << "double";

	std::cout << "\n\nThe text without any formating\n";
	std::cout << "Ints" << "Floats" << "Doubles" << "\n";
	std::cout << "\nThe text with setw(15)\n";
	std::cout << "Ints" << std::setw(15) << "Floats" << std::setw(15) << "Doubles" << "\n";
	std::cout << "\n\nThe text with tabs\n";
	std::cout << "Ints\t" << "Floats\t" << "Doubles" << "\n";

	int a = 45;
	float b = 45.323;
	double c = 45.5468;
	int aa = a + 9;
	float bb = b + 9;
	double cc = c + 9;
	int aaa = aa + 9;
	float bbb = bb + 9;
	double ccc = cc + 9;

	std::cout << a << "\t" << b << "\t" << c << "\n";
	std::cout << aa << setw(10) << bb << setw(10) << cc << "\n";
	std::cout << aaa << "\t" << bbb << "\t" << ccc << "\n\n";

	std::cout << "print with set width = 10\n";
	std::cout << "Ints" << std::setw(10);
	std::cout << "Floats" << std::setw(10);
	std::cout << "Doubles" << std::setw(10) << "\n";

	std::cout << a;
	std::cout << std::setw(12) << b;
	std::cout << std::setw(10) << c << "\n";

	std::cout << aa;
	std::cout << std::setw(12) << bb;
	std::cout << std::setw(10) << cc << "\n";

	std::cout << aaa;
	std::cout << std::setw(12) << bbb;
	std::cout << std::setw(10) << ccc << "\n\n";
	
}
