/* L8: Binary Tree Animal Guessing Game
* Author of the code: Dimitrios Ntentia
FIXME: Expand this with names and purpose!
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	char readchar;
	//vector<str> memoryvect;
	string line;

	fstream memoryfile("animallearning.txt"); // type that allows for both reading and writing to memoryfile
	if (memoryfile.is_open())
	{
		while (getline(memoryfile, line))
		{
			
			cout << line << '\n';
		}
		memoryfile.close();
	}
	else {
		cout << "Unable to open file";
	}


	//FIXME: Code needed here

	cout << "\nFIXME by writing more code!" << endl;

	cin >> readchar; // This is to keep screen open in some situations.
	return 0;
}
