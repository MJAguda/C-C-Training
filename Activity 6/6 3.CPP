#include<iostream>
#include<conio.h>

void main()
{

int x,prod=1;

cout<<"Enter a Number : ";
cin>>x;
for(int i=1;i<=x;i++)
{
	prod=prod*i;
}

cout<<"Factorial is : "<<prod;
getch();
}
