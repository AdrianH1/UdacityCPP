#include <iostream>

int main()
{
    int n = 6;
    int f = 1;
    int test = 6 * 5 * 4 * 3 * 2 * 1;
    for (n; n > 0; n--)
        f = f * n;
    std::cout << test << " | ";
    std::cout << f;
    return 0;
}