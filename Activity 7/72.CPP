#include<iostream.h>
#include<stdio.h>
#include<conio.h>

double cel;
void ftoc(double celsius);
void main()

{
clrscr();
	printf("Enter temperature in Celsius : ");
	scanf("%lf",&cel);
	ftoc(cel);
getch();
}

void ftoc(double celsius)
{
	double fah;
	fah=9.0/5.0*(celsius-32);
	printf("that is equal to %lf Fahrenheit",fah);
}