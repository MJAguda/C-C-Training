#include<stdio.h>
#include<conio.h>
double x;
void main()
{
clrscr();
printf("Enter Grade : ");
scanf("%lf",&x);
if (x>=75)
	printf("\n\tCongratulation you Passed!!! ^_^ ");
else
printf("\n\tYou Failed, Better Luck Next Semester -_- ");
getch();
}