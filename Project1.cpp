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
	string textLetter;
	//array of unique words
	vector <string> unique[ARRAY_SIZE]; //Changed this to a vector string so it can be an array than just a string
	int skip = 0;
	

	
	
	for (int i = 0; i < inputText.size(); i++)
	{

		if (skip > 0)
		{
			skip--;
			continue;
		}

		// This skips a certain length of characters to the next letter or separator
		int j = i + 1;
		int k = i + 2;
		char inputChar = inputText[i]; //This helps to find the letter
		char charNext = inputText[j];
		char next = inputText[k];
		char text = tolower(inputChar); //to create the lower ascii only



		if((inputChar >= 65 && inputChar <= 90) || (inputChar >= 97 && inputChar <= 122)) {//found a symbol
		//Changed this because that the if would just be looking for the length of the specific string was given
		//the if will look to see the letter ascii number is in range between one of the conditions
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
			
			//put current word's letter into output
			//Convert(text, outputText, currentWord, skip); //This caused an error that says it is out of the scope
			//see if the currword is unique
			/*
			if(!Find(currentWord, unique)){//didn't find word
				unique[uniqueWord] = currentWord;
				currentWord = "";
				uniqueWord++;
			}
			
			//add symbol to output
			outputText += inputText[i];
			*/
		}

		else{//found a letter
			if (inputChar == 92) {
				if (charNext ==110) {
					skip = 1;
					outputText += '\n';
					/*
					if(!Find(currentWord, unique)){//didn't find word
						unique[uniqueWord] = currentWord;
						currentWord = "";
						uniqueWord++;
					}
				*/
				}
			}	
			else if (inputChar == 45) {
				if (charNext == 92 && next == 110) {
					skip = 2;
					outputText += '-\n';
				}
				else {
					outputText += inputText[i];
					/*
					if(!Find(currentWord, unique)){//didn't find word
						unique[uniqueWord] = currentWord;
						currentWord = "";
						uniqueWord++;
					}
				*/
				}
			}
			else {
				/*
					if(!Find(currentWord, unique)){//didn't find word
						unique[uniqueWord] = currentWord;
						currentWord = "";
						uniqueWord++;
					}
				*/
			}
		}
	}

	/*
	if(!Find(currentWord, unique)){//didn't find word
		unique[uniqueWord] = currentWord;
		currentWord = "";
		uniqueWord++;
	}
	*/
	//return words count
	return wordCount;
	
}
/*
bool Find(string currWord, string uniqueWords){//TODO: fix + test this function
		
	for (int i = 0; i < uniqueWords.size(); i++)
	{
		if(currWord == uniqueWords[i]){//found word
			return true;
		}
	}

	return false;//word not found
}
*/
/*
void Convert(char letter, string &output, string &current, int skip){//TODO: test this function
	switch (letter)
	{
	case 'a':
		output += 'a';
		current += 'a';
		skip += nameLength[1];
		break;
	case 'b':
		output += 'b';
		current += 'b';
		skip += nameLength[1];
		break;
	case 'c':
		output += 'c';
		current += 'c';
		skip += nameLength[3];
		break;
	case 'd':
		output += 'd';
		current += 'd';
		skip += nameLength[1];
		break;
	case 'e':
		output += 'e';
		current += 'e';
		skip += nameLength[0];
		break;
	case 'f':
		output += 'f';
		current += 'f';
		skip += nameLength[3];
		break;
	case 'g':
		output += 'g';
		current += 'g';
		skip += nameLength[0];
		break;
	case 'h':
		output += 'h';
		current += 'h';
		skip += nameLength[1];
		break;
	case 'i':
		output += 'i';
		current += 'i';
		skip += nameLength[1];
		break;
	case 'j':
		output += 'j';
		current += 'j';
		skip += nameLength[3];
		break;
	case 'k':
		output += 'k';
		current += 'k';
		skip += nameLength[0];
		break;
	case 'l':
		output += 'l';
		current += 'l';
		skip += nameLength[0];
		break;
	case 'm':
		output += 'm';
		current += 'm';
		skip += nameLength[0];
		break;
	case 'n':
		output += 'n';
		current += 'n';
		skip += nameLength[4];
		break;
	case 'o':
		output += 'o';
		current += 'o';
		skip += nameLength[1];
		break;
	case 'p':
		output += 'p';
		current += 'p';
		skip += nameLength[0];
		break;
	case 'q':
		output += 'q';
		current += 'q';
		skip += nameLength[2];
		break;
	case 'r':
		output += 'r';
		current += 'r';
		skip += nameLength[1];
		break;
	case 's':
		output += 's';
		current += 's';
		skip += nameLength[2];
		break;
	case 't':
		output += 't';
		current += 't';
		skip += nameLength[1];
		break;
	case 'u':
		output += 'u';
		current += 'u';
		skip += nameLength[3];
		break;
	case 'v':
		output += 'v';
		current += 'v';
		skip += nameLength[1];
		break;
	case 'w':
		output += 'w';
		current += 'w';
		skip += nameLength[3];
		break;
	case 'x':
		output += 'x';
		current += 'x';
		skip += nameLength[1];
		break;
	case 'y':
		output += 'y';
		current += 'y';
		skip += nameLength[2];
		break;
	case 'z':
		output += 'z';
		current += 'z';
		skip += nameLength[0];
		break;
	
	default:
		break;
	}
	
}
*/