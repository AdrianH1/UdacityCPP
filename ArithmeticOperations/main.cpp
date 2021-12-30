#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

void operations();
void typeConversion();
void postPreFix();
void assigmentOperators();

int main() {
    operations();
    typeConversion();
    postPreFix();
    assigmentOperators();
    return 0;
}

void assigmentOperators()
{
    int a = 0;
    std::cout << "Variable\t\tOperation\tResult\n";
    std::cout << "a = " << a;
    a += 2;
    std::cout << "\t\t\ta += 2 \t\t a = " << a << "\n";

    std::cout << "a = " << a << " : ";
    a -= 4;
    std::cout << "\t\ta -= 4 \t\t a = " << a << "\n";

    int b = 3;
    std::cout << "a = " << a << ", b = " << b << " : ";
    a *= b;
    std::cout << "\ta *= b \t\t a = " << a << "\n";

    std::cout << "a = " << a << ", b = " << b << " : ";
    a /= b;
    std::cout << "\ta /= b \t\t a = " << a << "\n";
}

void postPreFix()
{
    int a = 0, b = 0;
    int post = 0, pre = 0;
    std::cout << "Inital values: \t\t\tpost = " << post << " pre= " << pre << "\n";
    post = a++;
    pre = ++b;
    std::cout << "After one postfix and prefix: \tpost = " << post << " pre= " << pre << "\n";
    post = a++;
    pre = ++b;
    std::cout << "After two postfix and prefix: \tpost = " << post << " pre= " << pre << "\n";
}

void typeConversion()
{

    int a = 65;
    char charA = 65;
    char charB = 'B';
    float answer = 0;
    char charC = 67;
    int integer = 80;
    float floatNumber = 0.0;

    std::cout << "a = " << a << "\n";
    std::cout << "charA = " << charA << "\n";
    std::cout << "charB = " << charB << "\n";

    //we can assign an integer to a float
    floatNumber = integer;
    std::cout << "integer = " << integer << "\n\n";
    std::cout << "floatNumber = integer = " << floatNumber << "\n";

    //we can assign a char to a float
    floatNumber = charB;
    std::cout << "floatNumber = charB = " << floatNumber << "\n";

    answer = floatNumber / 4;
    std::cout << "answer = floatNumber/4 = " << answer << "\n";

    //But assigning a float to a char doesn't quite work
    charC = answer;
    std::cout << "charC = answer = " << charC << "\n";

    //assigning a float to an interger, results in the float being truncated
    integer = answer;
    std::cout << "integer = floatNumber = " << integer << "\n";
}

void operations()
{
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;

    float volCube, volSphere, volCone = 0;

    //Cube Volume = side^3
    volCube = std::pow(cubeSide, 3);
    
    //Sphere Volume = (4/3) * pi * radius^3
    volSphere = (4 / 3) * M_PI * std::pow(sphereRadius, 3);

    //Cone Volume = pi * radius^2 * (height/3)
    volCone = M_PI * std::pow(coneRadius, 2) * (coneHeight / 3);

    std::cout << "Volume Cube: " << volCube <<"\n";
    std::cout << "Volume Sphere: " << volSphere <<"\n";
    std::cout << "Volume Cone: " << volCone <<"\n";
}