// 04_keyboard_input.cpp -- input and output
#include <iostream>
int main()
{
	using namespace std;
	int chocolates;

	cout << "Give me some chocolates!!" << endl;
	cin >> chocolates;                                     // user input to the program
	cout << "You gave me " << chocolates << " chocolates"; // display the value of the variable
	cout << endl;
	chocolates = chocolates - 1;                           // modify the variable
	cout << "I ate one and I now have " << chocolates << " chocolates" << endl;

	return 0;
}