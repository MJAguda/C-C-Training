#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <ctime> 
#include <conio.h>
#include <windows.h>

using namespace std;

	COORD coord = {0, 0};

void gotoxy(int x, int y){
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);	
}

int main(){
	
	time_t rawtime;
	struct tm * timeinfo; 
	time (&rawtime);  
	timeinfo = localtime (&rawtime);   
	
	char day [10];
	char date [10];
	char time [10];
	
	string idNum;
	char enter;
	char *ID = new char[99];
	bool done = true;
	bool found = true;
	
	while(done && found){
		
		system("color 0F");
		gotoxy(33, 2); cout << "COLLEGE OF ENGINEERING" << endl;
		gotoxy(33, 3); cout << "  ATTENDANCE MONITORY" << endl << endl;
	
		strftime (day, 80 ,"%A",timeinfo);  
		strftime (date, 80 ,"%x",timeinfo);  
		strftime (time, 80 ,"%I:%M %p",timeinfo);  
		
		gotoxy(41, 5); cout << day << endl;
		gotoxy(40, 6); cout << date << endl;
		gotoxy(40, 7); cout << time << endl << endl;
		
		gotoxy(36, 9); cout << "[Enter x to end]" << endl;
		gotoxy(36, 10); cout << "ID #: ";
		cin >> idNum;
		
		string info = idNum + ".txt";
		string file;
		ofstream outFile;
		ifstream inFile;
		
		string admin = "admin";
		
		if(idNum!="x"){
			
			if(idNum==admin){
				system("cls");
				system("color F0");
				cout << endl << "[ADMINISTRATOR]" << endl << endl;


				cout << "ENTER STUDENT'S ID#: ";
				cin >> idNum;
				info = idNum + ".txt";
				strcpy(ID, info.c_str());
				inFile.open(ID);
				fstream files(ID);
				
				if(!files.good()){
					cout << endl << "STUDENT'S ID# NOT FOUND!" << endl;
					found = false; 
				}
				else{
					string file;
					cout << endl;
					while(getline(inFile, file)){
						cout << file << endl;
					}
					inFile.close();
					found = false;
				}
			}
		
			if(found){
				
				cout << endl;
				gotoxy(39, 12); cout << "[0] TIME OUT";
				gotoxy(39, 13); cout << "[1] TIME IN";
//				gotoxy(39, 15); cout << "Enter: ";
				gotoxy(46, 15); enter = getch();
		
				switch(enter){
					case '0' : 
						system("color 0C");
						gotoxy(39, 15); cout << "TIME OUT!";
						gotoxy(42, 17); cout << "DONE!";
						gotoxy(34, 18); system("PAUSE"); 
						system("cls");
						strcpy(ID, info.c_str());
						outFile.open(ID, ofstream::app);
						outFile << "[TIME OUT:]" <<  endl;
						outFile << "ID#\t: " << idNum << endl;	
						outFile << "DAY\t: " << day << endl;
						outFile << "DATE\t: " << date << endl;
						outFile << "TIME\t: " << time << endl;
						outFile << "------------------" << endl;
						outFile.close();
						break;
					case '1' :
						system("color 0C");
						gotoxy(39, 15); cout << "TIME IN!";
						gotoxy(42, 17); cout << "DONE!";
						gotoxy(34, 18);system("PAUSE");
						system("cls");
						strcpy(ID, info.c_str());
						outFile.open(ID, ofstream::app);
						outFile << "[TIME IN:]" <<  endl;
						outFile << "ID#\t: " << idNum << endl;	
						outFile << "DAY\t: " << day << endl;
						outFile << "DATE\t: " << date << endl;
						outFile << "TIME\t: " << time << endl;
						outFile << "------------------" << endl;
						outFile.close();
						break;
					default :
						gotoxy(38, 17); cout << "Invalid input!" << endl;
						Sleep(1300);
						done = false;
						break;
				}
			}
		}
		else{
			gotoxy(34,13); cout << "Thank you for trying!" << endl;
			found = false;
			//Sleep(1300);
		}
	}

	return 0;
}

