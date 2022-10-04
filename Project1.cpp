// Project1.cpp : 
// Kyle Whitney
// Trinity Whitehead
#include <string>
#include <iostream>  
#include <sstream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

/*
   You must complete the function funWithCallLetter.
   funWithCallLetter returns the count of words in a string(s)

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
	            The same word, with different case, count for one word(not case sensitive)

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
const int ARRAY_SIZE = 100;

unsigned int funWithCallLetter(const string & inputText, string & outputText, int & uniqueWord ) 
{
	//# of words in a string
	int wordCount = 0;
	//# of unique words, not case sensitive
	uniqueWord = 0;
	//all lowercase output text of compiled words from phonetic word alphabet
	outputText = "";
	//current word
	string currentWord = "";
	//array of unique words
	string unique[ARRAY_SIZE];
	
	for (int i = 0; i < inputText.length(); i++)
	{
		if(((inputText[i] < 'A' || inputText[i] > 'z') || (inputText[i] > 'Z' && inputText[i] < 'a')) && inputText[i] != '-')//found a symbol
		{
			//put current word's letter into output
			Convert(currentWord, outputText);
			//see if the currword is unique
			if(!Find(currentWord, unique)){//didn't find word
				unique[uniqueWord] = currentWord;
				currentWord = "";
				uniqueWord++;
			}
			//add symbol to output
			outputText += inputText[i];
		}
		else{//found a letter
			//add letter(or dash) to curr word
			currentWord += inputText[i];
		}
	}
	
	//return words count
	return wordCount;
}

bool Find(string currWord, string uniqueWords[ARRAY_SIZE]){//TODO: fix + test this function
		
	for (int i = 0; i < uniqueWords.size(); i++)
	{
		if(currWord == uniqueWords[i]){//found word
			return true;
		}
	}

	return false;//word not found
}

void Convert(string &currWord, string &output){//TODO: test this function
	switch (tolower(currWord[0]))
	{
	case 'a':
		output += 'a';
		break;
	case 'b':
		output += 'b';
		break;
	case 'c':
		output += 'c';
		break;
	case 'd':
		output += 'd';
		break;
	case 'e':
		output += 'e';
		break;
	case 'f':
		output += 'f';
		break;
	case 'g':
		output += 'g';
		break;
	case 'h':
		output += 'h';
		break;
	case 'i':
		output += 'i';
		break;
	case 'j':
		output += 'j';
		break;
	case 'k':
		output += 'k';
		break;
	case 'l':
		output += 'l';
		break;
	case 'm':
		output += 'm';
		break;
	case 'n':
		output += 'n';
		break;
	case 'o':
		output += 'o';
		break;
	case 'p':
		output += 'p';
		break;
	case 'q':
		output += 'q';
		break;
	case 'r':
		output += 'r';
		break;
	case 's':
		output += 's';
		break;
	case 't':
		output += 't';
		break;
	case 'u':
		output += 'u';
		break;
	case 'v':
		output += 'v';
		break;
	case 'w':
		output += 'w';
		break;
	case 'x':
		output += 'x';
		break;
	case 'y':
		output += 'y';
		break;
	case 'z':
		output += 'z';
		break;
	
	default:
		break;
	}
}