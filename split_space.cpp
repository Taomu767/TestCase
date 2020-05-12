#include <string>
#include <iostream>
#include <sstream>
//#include <bits/stdc++.h> 
using namespace std;

void removeDupWord(std::string str)
{
	// Used to split string around spaces. 
	std::istringstream ss(str);

	// Traverse through all words 
	do {
		// Read a word 
		string word;
		ss >> word;

		// Print the read word 
		cout << word << endl;

		// While there is more to read 
	} while (ss);
}

// Driver function 
int main()
{
	string str = "Geeks for Geeks";
	removeDupWord(str);
	return 0;
}