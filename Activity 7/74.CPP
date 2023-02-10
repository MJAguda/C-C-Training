#include<stdio.h>
#include<conio.h>

int factorial(int x);

void main()
{
int n;
clrscr();
	printf("Enter a Number : ");
	scanf("%d",&n);
	printf("Factorial is : %d",factorial(n));
getch();
}
int factorial(int x)
{
int prod=1;
for(int i=1;i<=x;i++)
prod*=i;
return(prod);
}
