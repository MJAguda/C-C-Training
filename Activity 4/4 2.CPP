#include<stdio.h>
#include<conio.h>
double x;
void main()
{
clrscr();
printf("Enter Number : ");
scanf("%lf",&x);
if (x<0)
	printf("\n\tx is Negative");
else if(x>0)
	printf("\n\tx is Positive");
else
	printf("\n\tx is Zero");
getch();
}