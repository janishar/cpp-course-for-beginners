// 08_user_defined_functions_multiple_arguments.cpp -- defining your own function
#include <iostream>

int perimeter(int, int);                 // function prototype

using namespace std;

int main()
{
	int length, width;                  // multiple variable declaration
	cout << "Enter rectange length: ";
	cin >> length;
	cout << "Enter rectange width: ";
	cin >> width;
	cout << "It perimeter of the rectange is " << perimeter(length, width) << endl;
	return 0;
}

int perimeter(int length, int width)
{
	return 2 * (length + width);
}