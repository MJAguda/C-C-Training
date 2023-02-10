#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
float r,sum=1;
for(int i=2;i<=100;i++)
{
sum=sum+i;
}
gotoxy(20,5);
cout<<"SUM is : "<<sum;
getch();
}