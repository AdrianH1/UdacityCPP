/*Goal: practice class inheritance
*/

#include "main.hpp"
#include "Dog.hpp"

int main()
{
    Rose r1;
    r1.setBloomTime("spring");
    r1.setFragrance("strong");

    std::cout << "r1 blooms in " << r1.getBloomTime() << ", " << r1.getFragrance() << std::endl;

    Pet p1;
    p1.setName("Kali");
    p1.setIdNumber(44444);
    p1.setBreed("Aussie");

    std::cout << p1.getName() << " " << p1.getIdNumber() << " " << p1.getBreed();
    return 0;
    return 0;
}