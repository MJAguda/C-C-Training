//Write a C program to check whether a character is alphabet or not.

#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

int main(){
	
 	char character;
	
	cout << "Enter a character : ";
	cin >> character;
	
	if((character >= 65 && character <= 90) || (character >= 97 && character <= 122)) {
		cout << character << " is a character";
	}
	else{
		cout << character << " is not a character";
	}
	
	getch();
	return 0;
}

