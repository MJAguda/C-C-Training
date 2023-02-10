#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

double x;
char ans;

int main()
{

printf("Enter Grade : ");
scanf("%lf",&x);
if (x>100)
printf("\n\tInvalid Grade");
else if (x>=95)
	printf("\n\tDistinguished");
else if (x>=90)
	printf("\n\tExcellent");
else if (x>=85)
	printf("\n\tVery Good");
else if (x>=80)
	printf("\n\tGood");
else if (x>=75)
	printf("\n\tPassing");
else
	printf("\n\tFailed");

cout<<"\nTry Again [Y/N] : ";
cin>>ans;
cout<<ans;
	
getch();
}
