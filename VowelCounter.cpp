#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

int main(){

	char str[2000];
	int k, vowel, length;
	
	system("cls");
	
	printf("Enter a String : ");
	gets(str);
	vowel = 0;
	length = strlen(str);
		
	for(k=0 ; k<length ; k++){
		switch(str[k]){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':	
			case 'e':
			case 'i':
			case 'o':
			case 'u':	vowel++;
			break;
			default:
			break;	
		}
	}
	printf("\nTotal number of vowels are %d", vowel);	
	getch();
	return 0;
}








