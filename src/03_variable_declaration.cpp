#include <iostream>
int main()
{
	using namespace std;
	int chocolates;              // declare an integer variable
	
	chocolates = 10;             // assigns a value to a variable
	cout << "I have ";
	cout << chocolates;          // display the value of the variable
	cout << " chocolates";
	cout << endl;
	
	chocolates = chocolates - 1; // modify the variable
	cout << "I now have " << chocolates << " chocolates" << endl;

	return 0;
}