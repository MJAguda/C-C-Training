#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	char var[100]; //Input Array
	char rev[100]; //Reverse of Input Array
	int length; //Length of the Array
	int i;

	cout << "Enter number of Elements : ";
	cin >> length;
	
	printf("Enter the Elements : "); //
	
	for(i=0 ; i<length ; i++){
		cin >> var[i];
	}
	
	printf("\nInput Array = ");
	for(i=0 ; i<length ; i++){
		cout << var[i];
	}
}



