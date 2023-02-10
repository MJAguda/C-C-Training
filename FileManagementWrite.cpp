#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fPointer; //File Point to know what and where you're in file
	
	fPointer = fopen("food.txt", "w");
	
	char string[100]; //Declaration
	
	printf("Enter a Food : "); //String Input
	scanf("%s", &string);
	
	fprintf(fPointer, string);
	
	fclose(fPointer);
	return 0;
}
