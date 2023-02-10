#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
	ofstream outFile;
	ifstream inFile;
	
	string ID;
	
	cout << "ID#: ";
	cin >> ID;
	
	inFile.open(( ID + " info/" + ID + ".txt
	").c_str());
	string name;
	inFile >> name;
	cout << name;
	
	return 0;
}

