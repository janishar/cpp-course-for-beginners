// comments.cpp -- displays a message

#include <iostream>

int main()
{
	using namespace std;
	cout << "I have comments in my end" << endl;  // This is line comment

	/* This is multiline comments:
		so, this line is also part of comment.
		Comments are ignored by the compiler
		and not compiles. They are used to make
		program readable.
	*/
	cout << "I have comments on my top" << endl;
	return 0;                                
}                                            