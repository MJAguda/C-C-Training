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

	inFile.open("info.txt");
	
	string item; 
	
	cout << "Enter item: ";
	cin >> item;
	
	string name;
	int pcs;
	int price;
	int token;
	int bookStat;

	while(inFile >> name >> pcs >> price){
		
		if(item==name){
			cout << endl << "Item: " << name << endl;
			cout << "Quantity: " << pcs << endl;
			cout << "Price: " << price << endl << endl;
			break;
		}
		else{
			cout << endl << "Item is not on the lists." << endl;
			break;
		}
		
	}
	
	return 0;
}

