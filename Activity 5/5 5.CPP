#include<conio.h>
#include<iostream.h>
int no;
char r;
void main()
{
r:
clrscr();
cout<<"\n\tEnter a number from [0 - 9] : ";
cin>>no;
	switch(no)
	{
		case 1:cout<<"\n\tONE";
			break;
		case 2:cout<<"\n\tTWO";
			break;
		case 3:cout<<"\n\tTHREE";
			break;
		case 4:cout<<"\n\tFOUR";
			break;
		case 5:cout<<"\n\tFIVE";
			break;
		case 6:cout<<"\n\tSIX";
			break;
		case 7:cout<<"\n\tSEVEN";
			break;
		case 8:cout<<"\n\tEIGHT";
			break;
		case 9:cout<<"\n\tNINE";
			break;
		case 0:cout<<"\n\tZERO";
			break;
		default:cout<<"\n\t\tInvalid";
			break;
	}
	cout<<"\n\n\tTry again? [Y/N] ";
	cin>>r;
	if (r=='y'||r=='Y')
		goto r;
getch();
}