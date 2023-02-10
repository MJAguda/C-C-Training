#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	int array[4][4] = {6, 4, 20, 90, 7, 10, 95, 100, 70, 60, 45, 70, 30, 11, 3, 9};
	int sum = 0;
	
	for(int i=0 ; i<4 ; i++){
		for(int j=0 ; j<4 ; j++){
			if(array[i][j]%2 == 0){
				sum+=array[i][j];
			}
		}
	}
	cout << "The sum of all even numbers stored in the 2d array is " << sum;
	getch();
	return 0;
}
