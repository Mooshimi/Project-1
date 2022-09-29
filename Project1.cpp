// Project1.cpp : 
// Your names
//
#include <string>
#include <iostream>  
#include <sstream>

using std::istringstream;
using std::string;

/*
   You must complete the function funWithCallLetter.
   funWithCallLetter return the count of words in a string(s)

   The words are written using NATO Phonetic Alphabet: https://www.worldometers.info/languages/nato-phonetic-alphabet/.
   The words can be written with mixed cases.

   Word separator: 
	   Words can be separated by space(s), punctuation(.?!), new line ('\n').
	   If a word is finished by '-' and is followed by a new line, 
	   the next word is part of the last word on the previous line 
	   and count only as one(hyphenated).

	inputText: the input text you must processed
	outputText: the converted text to english. The word separator are transferred as-is 
				from the inputText. The outputText is always in lowercase.

	uniqueWord: count how many unique word was in the input text. 
	            The same word,with different case, count for one word(not case sensitive)

	Project1.cpp : you must implement the fcuntion funWithCallLetter, you cannot change its signature

	Project1.h    : the declaration of funWithCallLetter

	Project1Test  : unit tests to test countWords
	                you must add 4 additional unit tests(implemented in yourTests).  Each test must verify 
					additional logic that was not covered in the previous tests. Comment what specifically
					each of your additionnal tests is testing for.

	Grading       : 1 unit test for empty string         = 0
	                10 unit tests x 7 pts each           = 70
					4 additional unit tests x 5 pts each = 20 (you must complete them in yourTests)
					program structure                    = 10
					total                                = 100
	Your grade will be calculated on the last test your program manage to successfully execute, based on the 
	order in Project1Test.
	
	Program that do not compile will receive a grade of 0.

	Submission    : one submission per team
*/


unsigned int  funWithCallLetter(const string & inputText, string & outputText, int & uniqueWord ) 
{
	int wordCount = 0;

	uniqueWord = 0;
	outputText = "";
	
	//insert your code here
	
	return wordCount;
}


