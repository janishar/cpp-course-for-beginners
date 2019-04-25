// 05_function_from_library.cpp -- using the sqrt() function
#include <iostream>
#include <cmath> // or math.h
int main()
{
	using namespace std;
	double area;
	cout << "Enter the floor area, in square meter, of your home: ";
	cin >> area;
	double side = sqrt(area); // declaration and assignemnt in single statement
							  // the sqrt return the square root and that is stored in side
	cout << "So, our floor length is " << side
		 << " meters " << endl;
	return 0;
}