#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	
	int size;
	int rev[100] = {74, 111, 107, 101, 32, 108, 97, 110, 
					103, 32, 80, 97, 110, 100, 97, 107};
	

	
	for(int i=0 ; i<16 ; i++){
		printf("%c", rev[i]);
	}
}
