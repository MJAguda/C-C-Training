#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
float x,r,sum=1;
gotoxy(36,2);
cout<<"\"SUMMATION\"";
gotoxy(15,4);
cout<<"Enter a Number : ";
cin>>x;
for(int i=2;i<=x;i++)
{
sum=sum+i;
}
gotoxy(20,5);
cout<<"Factorial is : "<<sum;
getch();
}