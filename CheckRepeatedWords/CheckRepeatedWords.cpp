// CheckRepeatedWords.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"

int main()
{
	string previous = " ";       // previous word;initialized to “not a word”
	string current;              // current word
	int count = 0;               // count how many times the word got repeated
	while (cin >> current)       // read a stream of words
	{
		if (previous == current) // check if the word is the same as last
		{
			cout << "repeated word: " << current << " " << ++count << " time(s)" << '\n';
		}
		else
		{
			count = 0;   // reset the counter
		}
		previous = current;
	}
}
