#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	char LName [50], FName [50], MName [50];
	char FullName [500];
	
	cout << "Enter Last Name : ";
	gets(LName);
	strcpy(FullName, LName);
	
	cout << "Enter First Name : ";
	gets(FName);
	
	cout << "Enter Middle Name : ";
	gets(MName);
	
	strcpy(FullName, FName);
	strcat(FullName, " ");
	strcat(FullName, MName);
	strcat(FullName, " ");
	strcat(FullName, LName);
	
	cout << "Fuck you, " <<FName<<" "<<MName<<" "<<LName<<endl;
	cout << "Screw you, " << FullName;

	getch();
return 0;
}
