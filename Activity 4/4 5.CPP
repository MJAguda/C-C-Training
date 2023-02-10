#include<stdio.h>
#include<conio.h>
double x;
void main()
{
clrscr();
printf("Enter Grade : ");
scanf("%lf",&x);
if (x==75)
printf("\n\tPA");
else if (x>75)
printf("\n\tBlowout");
else
printf("\n\tBagsak");
getch();
}