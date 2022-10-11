
#include <cassert>
#include "Project1.h"

using namespace std;

void yourTests() 
{
	string output;
	int    uniqueWord;
	//you must write 4 additional tests cases
	//and document specifically what you are testing in each test
	//you must add test cases, which were not coverred in the 10 test cases
	//included in the project
	//cases
	//word separator with a underscore 
	assert( funWithCallLetter( "alphaBravoCharlie_DeltaEchoFoxtrox", output, uniqueWord ) == 2);
	assert( output.compare("abc_def") == 0 );
	cout << "additional test #1 completed" << endl;

	//word separator with numbers
	assert( funWithCallLetter( "alphaBravoCharlie 123 DeltaEchoFoxtrox", output, uniqueWord ) == 2);
	assert( output.compare("abc 123 def") == 0 );
	cout << "additional test #2 completed" << endl;

	//double underscore between words counts as one word
	assert( funWithCallLetter( "alphaBravoCharlie__DeltaEchoFoxtrox", output, uniqueWord ) == 1);
	assert( output.compare("abc__def") == 0 );
	assert( uniqueWord == 1 );
	cout << "additional test #3 completed" << endl;

	//plus symbol as one word
	assert( funWithCallLetter( "alphaBravoCharlie+DeltaEchoFoxtrox", output, uniqueWord ) == 1);
	assert( output.compare("abc+def") == 0 );
	assert( uniqueWord == 1 );
	cout << "additional test #4 completed" << endl;
}

