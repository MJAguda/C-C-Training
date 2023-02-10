#include<stdio.h>
#include<conio.h>

void main()
{
int array[5],sum=0,max=0;
clrscr();
printf("Enter 5 nonnegative numbers: \n");
for (int i=0; i<5; i++)
{
scanf("%d",&array[i]);
if (array[i]>max)
{
max=array[i];
sum=sum+array[i];
}
else
{
printf("That is a negative number!");
break;
}
}
printf("The highest number is %d\n", max);
printf("The sum of 5 numbers is: %d\n",sum);
getch();
}
