#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

	int final;
	char ans;

int main ()
{

rep:	printf("Enter your final Grade\n");
		scanf("%d",&final);
		
		if (final > 100){
			cout << "Invalid Input";
		}
		else if (final >= 95){
			printf("A+\n");
		}
		else if (final >= 90){
			printf("A\n");
		}
		else if (final >= 85){
			printf("B\n");
		}
		else if (final >= 75){
			printf("C\n");
		}
		else if (final >= 0 || final >= 60){
			printf("F\n");
		}
		else{
			printf("Invalid Input");
		}

	cout << "\ntry again? [Y/N]";
	cin >> ans;
	
	if(ans=='y'||ans=='Y'){
		goto rep;
	}

	getch();
	return 0;	
}

