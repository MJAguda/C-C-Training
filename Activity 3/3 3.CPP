#include<stdio.h>
#include<conio.h>
double pi, area, circumference;

#define pi 3.1416

void main()
{
float radius;
clrscr();
printf("Enter The Radius : ");
scanf("%f",&radius);
area=pi*radius*radius;
circumference=2*pi*radius;
printf("\n\tThe Area of a circle given a radius of %5.2f",radius);
printf(" is : %5.2f\n",area);
printf("\n\tThe Circumference");
printf(" is : %5.2f\n",circumference);
getch();
}