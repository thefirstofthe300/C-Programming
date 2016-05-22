/**
 * Name: Daniel Seymour
 * Assignment: Final Programming Assignment, Problem 3
 * Term: December 2015
 * Course name: C++ Programming
 * Course number: COS-213-OL012
 *
 * Write a program that reads from the external file input.txt, counts the 
 * letters in every word, replaces the word by that number, and then writes the
 * numbers to an external file output.txt (Note: Do not forget to copy the
 * blanks. You may wish to use infile.get and outfile.put in your program.)
 * Also you may wish to use the strlen( ) function.
 */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int getWordLength(string, int, int);

int main()
{
	ifstream input("input.txt");
	ofstream output("output.txt");

	string line;

	if (!input.is_open())
	{
		cout << "not able to open input file";
	}
	if (!output.is_open())
	{
		cout << "not able to open output file";
	}
	while(getline(input, line))
	{
		int currentPos = 0;
		int wordLength = 0;
		int lineLength = line.length();
		while (currentPos < lineLength)
		{
			if (line[currentPos] == ' ')
			{
				currentPos++;
				output.put(' ');
			}
			else
			{
				wordLength = getWordLength(line, currentPos, lineLength);
				output << wordLength;
				currentPos += wordLength;
			}
		}
		output << endl;
	}
	input.close();
	output.close();
}

int getWordLength(string line, int currentPos, int lineEnd)
{
	int wordLength = 0;
	while(line[currentPos] != ' ' && currentPos < lineEnd) {
	    wordLength++;
	    currentPos++;
	}
	return wordLength;
}