#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

int main()
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

    return 0;
}