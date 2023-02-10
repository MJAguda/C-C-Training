#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void stars(int n);
void main()
{
clrscr();
	stars(5);
	printf("\n");
	stars(2);
	printf("c");
	stars(2);
	printf("\n");
	stars(5);
getch();
}

void stars(int s)
{
for(int r=1;r<=s;r++)
printf("*");
}
