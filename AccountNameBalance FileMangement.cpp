#include <stdio.h>
#include <stdlib.h>

int main(){
	int account;
	char name[30];
	double balance;
	double sum=0;
	int i = 0;
	
	FILE *cfPtr; //File pointer to keep track where we are in a file
	
	cfPtr=fopen("CpE.txt", "w"); //Opening an existing File in write mode
	
	if(cfPtr==NULL){
		printf("File could not be opened.\n");
		return 1;
	}
	
	printf("Enter the Account, Name and Balance.\n");
	
	while (i < 5 ){
		scanf("%d %s %lf", &account, &name, &balance);
		fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
		sum += balance;
		i++;
	}
	
	printf("Total Balance : %.2f\n", sum);
	
	fclose(cfPtr);
	return 0;
}
