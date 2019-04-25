// 06_user_defined_functions.cpp -- defining your own function

#include <iostream>

void exercise(int);  // function prototype for exercise

using namespace std; // importing names from standard library for all functions

int main()
{
	cout << "Pick a number for exercise: ";
	int count;
	cin >> count;
	exercise(count);
	return 0;
}

void exercise(int count)
{
	cout << "Trainer told you to do " << count << " jumps.";
	// void functions don’t need return statements
}