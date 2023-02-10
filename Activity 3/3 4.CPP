#include<stdio.h>
#include<conio.h>
double mt;

#define mt 35273.92

void main()
{
float ounce,ton;
clrscr();
printf("Enter The Weight in Ounces : ");
scanf("%f",&ounce);
ton=ounce/mt;
printf("\n\tThe Weight of %f",ounce);
printf(" ounce is : %5.9f\n",ton);
printf("\tmetric ton.");
getch();
}