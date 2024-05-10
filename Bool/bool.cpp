#include <iostream>

int main()
{
	bool bFalse = 0; // okay: initialized to false
	bool bTrue = 1; // okay: initialized to true
	bool bNo = 2; // error: narrowing conversions disallowed

	std::cout << bFalse << bTrue << bNo << '\n';

	std::cout << std::boolalpha; // print bools as true or false

	bool b1 = 4 ; // copy initialization allows implicit conversion from int to bool
	std::cout << b1 << '\n';

	bool b2 = 0 ; // copy initialization allows implicit conversion from int to bool
	std::cout << b2 << '\n';

	bool bb; // default initialize to false
	std::cout << "Enter a boolean value: ";
	std::cin >> bb;
	std::cout << "You entered: " << bb << '\n';

	bool b;
	std::cout << "Enter a boolean value: ";

	// Allow the user to enter 'true' or 'false' for boolean values
	// This is case-sensitive, so True or TRUE will not work
	std::cin >> std::boolalpha;
	std::cin >> b;

	std::cout << "You entered: " << b << '\n';
	return 0;
}