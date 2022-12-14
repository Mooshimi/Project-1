// Project1.cpp : 
// Kyle Whitney
// Trinity Whitehead
#include <string>
#include <iostream>  
#include <sstream>
#include <stdio.h>
#include <ctype.h>
#include <vector>

using namespace std;
using std::vector;
using std::string;

/*
   You must complete the function funWithCallLetter.
   funWithCallLetter returns the count of words in a string(s)

   Word separator: 
	   Words can be separated by space(s), punctuation(.?!), new line ('\n').
	   If a word is finished by '-' and is followed by a new line, 
	   the next word is part of the last word on the previous line 
	   and count only as one(hyphenated).

	Project1.cpp : you must implement the function funWithCallLetter, you cannot change its signature

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

const int ARRAY_SIZE = 1;
//helps the skip variable once a letter is concentrated and skip certain length of characters to the next letter or separator
const vector <int> nameLength = {3, 4, 5, 6, 7}; 

/**
 * @brief returns the count of words in a string
 * 
 * @param inputText input text you must process
 * @param outputText all lowercase output text of compiled words from phonetic word alphabet
 * @param uniqueWord # of unique words, not case sensitive
 * @return the count of words in a string
 */
unsigned int funWithCallLetter(const string & inputText, string & outputText, int & uniqueWord ) 
{
	uniqueWord = 0;
	outputText = "";

	int wordCount = 0;			//# of words in a string
	string currentWord = "";	//current word

	vector <string> current(ARRAY_SIZE);//array of all words
	vector <string> unique(ARRAY_SIZE);//array of unique words

int 	skip 	= 0;//# of next spaces to skip
	int 	j 		= 0;
	char 	inputChar = ' '; //This helps to find the letter
	char 	charNext = ' ';
	char 	text 	= ' '; //to create the lower ascii only
	
	for (int i = 0; i < inputText.size(); i++)//input string loop
	{
		if (skip > 0)//skip # of spaces in skip var
		{
			skip--;
			continue;
		}

		// This skips a certain length of characters to the next letter or separator
		j = i + 1;
		inputChar = inputText[i];
		charNext = inputText[j];
		text = tolower(inputChar);

		//found a letter	
		if((inputChar >= 65 && inputChar <= 90) || (inputChar >= 97 && inputChar <= 122)) {
			switch (text)
			{
				case 'a':
					outputText += 'a';
					currentWord += 'a';
					skip += nameLength[1];
					break;
				case 'b':
					outputText += 'b';
					currentWord += 'b';
					skip += nameLength[1];
					break;
				case 'c':
					outputText += 'c';
					currentWord += 'c';
					skip += nameLength[3];
					break;
				case 'd':
					outputText += 'd';
					currentWord += 'd';
					skip += nameLength[1];
					break;
				case 'e':
					outputText += 'e';
					currentWord += 'e';
					skip += nameLength[0];
					break;
				case 'f':
					outputText += 'f';
					currentWord += 'f';
					skip += nameLength[3];
					break;
				case 'g':
					outputText += 'g';
					currentWord += 'g';
					skip += nameLength[0];
					break;
				case 'h':
					outputText += 'h';
					currentWord += 'h';
					skip += nameLength[1];
					break;
				case 'i':
					outputText += 'i';
					currentWord += 'i';
					skip += nameLength[1];
					break;
				case 'j':
					outputText += 'j';
					currentWord += 'j';
					skip += nameLength[3];
					break;
				case 'k':
					outputText += 'k';
					currentWord += 'k';
					skip += nameLength[0];
					break;
				case 'l':
					outputText += 'l';
					currentWord += 'l';
					skip += nameLength[0];
					break;
				case 'm':
					outputText += 'm';
					currentWord += 'm';
					skip += nameLength[0];
					break;
				case 'n':
					outputText += 'n';
					currentWord += 'n';
					skip += nameLength[4];
					break;
				case 'o':
					outputText += 'o';
					currentWord += 'o';
					skip += nameLength[1];
					break;
				case 'p':
					outputText += 'p';
					currentWord += 'p';
					skip += nameLength[0];
					break;
				case 'q':
					outputText += 'q';
					currentWord += 'q';
					skip += nameLength[2];
					break;
				case 'r':
					outputText += 'r';
					currentWord += 'r';
					skip += nameLength[1];
					break;
				case 's':
					outputText += 's';
					currentWord += 's';
					skip += nameLength[2];
					break;
				case 't':
					outputText += 't';
					currentWord += 't';
					skip += nameLength[1];
					break;
				case 'u':
					outputText += 'u';
					currentWord += 'u';
					skip += nameLength[3];
					break;
				case 'v':
					outputText += 'v';
					currentWord += 'v';
					skip += nameLength[1];
					break;
				case 'w':
					outputText += 'w';
					currentWord += 'w';
					skip += nameLength[3];
					break;
				case 'x':
					outputText += 'x';
					currentWord += 'x';
					skip += nameLength[1];
					break;
				case 'y':
					outputText += 'y';
					currentWord += 'y';
					skip += nameLength[2];
					break;
				case 'z':
					outputText += 'z';
					currentWord += 'z';
					skip += nameLength[0];
					break;			
				default:
					break;
				}//end switch statement
			}//end found letter if statement
		//found a symbol	
		else{
			if (!currentWord.empty()) {
				if ((inputChar == 45 && charNext == 10) || (inputChar == 95 && charNext == 95) || inputChar == 43){
					wordCount += 0;
				}
				else {
					wordCount++;
				}
			}
			if (inputChar == 10) {//newline
				outputText += '\n';
				current.push_back(currentWord);
				currentWord = "";
			}	
			else if (inputChar == 45) {//dash
				outputText += '-';
				if(((inputText[i-1] >= 65 && inputText[i-1] <= 90) || (inputText[i-1] >= 97 && inputText[i-1] <= 122))&&(inputText[j]==10)){
					outputText += "\n";
					skip ++;//skip over the \n
				}
				else {
					current.push_back(currentWord);
				}
			}
			else if(inputChar == 32){//space
				outputText += ' ';
				current.push_back(currentWord);
				currentWord = "";
			}
			else if(inputChar == 63){//question mark
				outputText += '?';
				current.push_back(currentWord);
				currentWord = "";
			}
			else if(inputChar == 33){//exclamation point
				outputText += '!';
				current.push_back(currentWord);
				currentWord = "";
			}
			else if(inputChar == 46){//period
				outputText += '.';
				current.push_back(currentWord);
				currentWord = "";
			}
			else if (inputChar == 95) {
				outputText += '_';
				if (charNext == 95) {
					outputText += '_';
					skip++;
				}
				else {
					current.push_back(currentWord);
				}
			}
			else if (inputChar == 43) {
				outputText += '+';
			}
			else if (inputChar >= 48 && inputChar <= 57) {
				switch (inputChar) {
					case '0':
						outputText += '0';
						break;
					case '1':
						outputText += '1';
						break;
					case '2':
						outputText += '2';
						break;
					case '3':
						outputText += '3';
						break;
					case '4':
						outputText += '4';
						break;
					case '5':
						outputText += '5';
						break;
					case '6':
						outputText += '6';
						break;
					case '7':
						outputText += '7';
						break;
					case '8':
						outputText += '8';
						break;
					case '9':
						outputText += '9';
						break;
				}
				current.push_back(currentWord);
				currentWord = "";
			}
		}//end text detection else
	}//end for loop
	if (!currentWord.empty()) {
		wordCount++;
		current.push_back(currentWord);
		currentWord = "";
	}

	for (int i = ARRAY_SIZE; i < wordCount + ARRAY_SIZE; i++) {
		if (uniqueWord == 0) {
			unique.push_back(current[i]);
			uniqueWord++;
		}
		for(int l = ARRAY_SIZE; l < wordCount + ARRAY_SIZE; l++) {
			if (current[i] == unique[l]) {
				break;
			}
			else {
				unique.push_back(current[i]);
				uniqueWord++;
				break;
			}
		}
	}

	return wordCount;
}
