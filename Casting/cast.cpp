#include <iostream>

void print(int x)
{
	std::cout << x << '\n';
}

int main()
{
	print( static_cast<int>(5.5) ); // explicitly convert double value 5.5 to an int

	char ch{ 97 }; // 97 is ASCII code for 'a'
    	std::cout << ch << " has value " << static_cast<int>(ch) << '\n'; // print value of variable ch as an int

        unsigned int u { 5 };
        int s { static_cast<int>(u) }; // return value of variable u as an int
	std::cout << s << '\n';

	std::int8_t myInt{65};      // initialize myInt with value 65
    	std::cout << myInt << '\n'; // you're probably expecting this to print 65
	std::cout << static_cast<int>(myInt) << '\n'; // will always print 65

	return 0;
}