// 07_user_defined_functions_with_return.cpp -- defining your own function
#include <iostream>

int convertor(int); // function prototype

using namespace std;

int main()
{
	cout << "Enter meter length: ";
	int meters;
	cin >> meters;
	int centimeters = convertor(meters);
	cout << "It is equal to " << centimeters << " centimeters" << endl;
	return 0;
}

int convertor(int meters)
{
	return meters * 100;
}