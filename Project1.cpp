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
const vector <int> nameLength = {3, 4, 5, 6, 7}; //this will help the skip variable once a letter is concentrated and skip certain length of characters to the next letter or separator

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
	string textLetter = "";

	//array of unique words
	vector <string> current (ARRAY_SIZE);
	vector <string> unique(ARRAY_SIZE); //Changed this to a vector string so it can be an array than just a string
	int skip = 0;
	int j = 0;
	int k = 0;
	char inputChar = ' '; //This helps to find the letter
	char charNext = ' ';
	char next = ' ';
	char text = ' '; //to create the lower ascii only
	
	for (int i = 0; i < inputText.size(); i++)
	{

		if (skip > 0)
		{
			skip--;
			continue;
		}

		// This skips a certain length of characters to the next letter or separator
		j = i + 1;
		k = i + 2;
		inputChar = inputText[i]; //This helps to find the letter
		charNext = inputText[j];
		next = inputText[k];
		text = tolower(inputChar); //to create the lower ascii only

		if((inputChar >= 65 && inputChar <= 90) || (inputChar >= 97 && inputChar <= 122)) {//found a letter
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
				}
			}
			//please keep these simple until the skeleton is all there
			//also the skips in here were making us miss half the symbols
		else{//found a symbol
			if (!currentWord.empty()) {
				wordCount++;
			}
			else {
				cout << "There is no word";
			}
			if (inputChar == 10) {//10 is newline apparently
				outputText += '\n';
				current.push_back(currentWord);
				currentWord = "";
			}	
			else if (inputChar == 45) {//dash
				outputText += '-';
				current.push_back(currentWord);
				currentWord = "";
			}
			else if(inputChar==32){//space
				outputText += ' ';
				current.push_back(currentWord);
				currentWord = "";
			}
			else if(inputChar==63){//question mark
				outputText += '?';
				current.push_back(currentWord);
				currentWord = "";
			}
			else if(inputChar==33){//exclamation point
				outputText += '!';
				current.push_back(currentWord);
				currentWord = "";
			}
			else if(inputChar==46){//period
				outputText += '.';
				current.push_back(currentWord);
				currentWord = "";
			}
		}
	}
	if (!currentWord.empty()) {
		wordCount++;
		current.push_back(currentWord);
		currentWord = "";
	}

	for (int i = 100; i < (wordCount + 99); i++) {
		int l = 100;
		if (uniqueWord == 0) {
			unique.push_back(current[i]);
			uniqueWord++;
			continue;
		}
		while (l <= (uniqueWord + 99)) {
			if (current[i] == unique[l]) {
				l++;
				continue;
			}
			else {
				unique.push_back(current[i]);
				uniqueWord++;
				l++;
				break;
			}
		}
	}

	return wordCount;
	/*
	if(!Find(current, unique)){//didn't find word
	}
	//return words count
	return wordCount;
	*/
}

/*
bool Find(vector <string>  & currWord, vector <string>  & uniqueWords){//TODO: fix + test this function
	string word;	
	for (int i = 0; i < currWord.size(); i++)
	{
		word = uniqueWords[i];
		if(currWord == word[i]){//found word
			continue;
		}
	}

	return false;//word not found
}
*/