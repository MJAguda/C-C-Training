#include<stdio.h> //Library for N
#include<iostream> //Library for cin cout
#include<conio.h> //Library for getch and goto
#include<stdlib.h> //Library for cls and pause

using namespace std;

int main (){
	
	int num;
	char ans;
	
rep:
	
	system("CLS");
	
	cout << "Enter a Number : ";
	cin >> num;
	
	if(num%2 == 00){
		printf("EVEN\n");
	}
	else{
		printf("ODD\n");
	}
	
	cout << "Try Again? [Y/N]: ";
	cin >> ans;
	
	if(ans=='y'||ans=='Y')
	goto rep;
	
	getch();
	
return(0);	
}
