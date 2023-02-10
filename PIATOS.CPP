#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
for(int a=5;a>0;a--)
{
	for(int b=5;b>a;b--)
	{
		cout<<b;
	}
	for(int c=1;c<=a;c++)
	{
		cout<<c;
	}
	cout<<endl;
}
getch();
}