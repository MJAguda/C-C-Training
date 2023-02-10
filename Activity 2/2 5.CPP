#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,sum,dif;
clrscr();
printf("Enter The First Number: ");
scanf("%d",&x);
printf("Enter The Second Number: ");
scanf("%d",&y);
printf("Enter The Third Number: ");
scanf("%d",&z);
sum=x+y+z;
dif=x-y-z;
printf("\n\tThe Sum of %d",x);
printf(" and %d",y);
printf(" is: %d\n",sum);
printf("\n\tThe Difference is: %d\n",dif);
getch();
}