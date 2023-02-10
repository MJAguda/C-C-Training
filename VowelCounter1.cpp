#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

int main(){
	char array[100];
	int len, count;
	
	cout << "Enter a String : ";
	gets(array);
	
	len = strlen(array);
	
	for(int i=0; i<len ; i++){
		switch(array[i]){
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':{
				count++;
				break;
			}
		}
	}
	cout << "Number of vowel/s : "<<count;
	getch();
	return 0;
}
