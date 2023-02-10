#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	gotoxy(31,13);
	cout<<"*Mark Jayson Aguda*";
		for(int a=1;a<=19;a++)
		{
		gotoxy(30+a,12);
		cout<<"*";
		}
		for(int b=1;b<=19;b++)
		{
		gotoxy(30+b,14);
		cout<<"*";
		}
		getch();
}