#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,sum,dif,prod;
clrscr();
printf("Enter The First Number: ");
scanf("%d",&x);
printf("Enter The Second Number: ");
scanf("%d",&y);
sum=x+y;
dif=x-y;
prod=x*y;
printf("\n\tThe Sum of %d",x);
printf(" and %d",y);
printf(" is: %d\n",sum);
printf("\n\tThe Difference is: %d\n",dif);
printf("\n\tThe Product is: %d\n",prod);
getch();
}