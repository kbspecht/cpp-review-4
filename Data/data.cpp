#include <iostream>

int main()
{
    // assume 4 byte integers
    int x = 2147483647;
    std::cout << x << '\n';

    x = x + 1; // integer overflow, undefined behavior
    std::cout << x << '\n';

    std::cout << sizeof(int) << '\n';

    return 0;
}