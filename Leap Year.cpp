#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int year;
	char chc;
	
label:
	
	cout << "Enter a year : ";
	cin >> year;
	
	cout << "The year " <<year<< " is ";
	
	if(year%4==0 && year%100!=0){
		cout<<"a Leap Year!";
	}
	else if(year%100==0 && year%400==0){
		cout<<"a Leap Year!";
	}
	else if(year%400==0){
		cout<<"Leap Year!";
	}
	else{
		cout<<"Not a Leap Year!";
	}
	
	cout<<"Do you want to try again [Y/N]";
	cin>>chc;
	
	if(chc == 'Y' || chc == 'y'){
		goto label;	
	}
	
	getch();
	return 0;
}
