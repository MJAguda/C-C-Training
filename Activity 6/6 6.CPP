#include<iostream.h>
#include<conio.h>

void main()
{
rep:
clrscr();
float r,x,rep,sum=0;
gotoxy(27,2);
cout<<"\"AVERAGE of Five Numbers\"";
gotoxy(15,4);
cout<<"Enter a Number : ";
for(int i=1;i<=5;i++)
{
gotoxy(33,4);
cin>>x;
sum=sum+x;
}
gotoxy(20,5);
cout<<"Average is : "<<sum/5;
gotoxy(31,7);
cout<<"Try Again? [Y/N] : ";
cin>>r;
if(r=='Y'||r=='y')
{
goto rep;
}
getch();
}