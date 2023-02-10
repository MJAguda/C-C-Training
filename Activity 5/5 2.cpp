#include<iostream.h>
#include<conio.h>
void main()
	{
	x:
	clrscr();
	int month;
	char ans,x;
	cout<<"\n\t\tNumber of days in a month";
	cout<<"\n\t\t\t[1]\t-\tJanuary";
	cout<<"\n\t\t\t[2]\t-\tFebruary";
	cout<<"\n\t\t\t[3]\t-\tMarch";
	cout<<"\n\t\t\t[4]\t-\tApril";
	cout<<"\n\t\t\t[5]\t-\tMay";
	cout<<"\n\t\t\t[6]\t-\tJune";
	cout<<"\n\t\t\t[7]\t-\tJuly";
	cout<<"\n\t\t\t[8]\t-\tAugust";
	cout<<"\n\t\t\t[9]\t-\tSeptember";
	cout<<"\n\t\t\t[10]\t-\tOctober";
	cout<<"\n\t\t\t[11]\t-\tNovember";
	cout<<"\n\t\t\t[12]\t-\tDecember";
	cout<<"\n\n\t\tEnter the Month : ";
	cin>>month;
	switch(month)
		{
		case 1:
		case 3:
		case 5:
		case 7: 
		case 8: 
		case 10:
		case 12:cout<<"\n\t\t\tThere are 31 days in this month";
			break;
		case 2:	cout<<"\n\t\t\tThere are 28 days and 29 if leap year in this month";
			break;
		case 4: 
		case 6: 
		case 9: 
		case 11:cout<<"\n\t\t\tThere are 30 days in this month";
			break;
		default:cout<<"\n\t\t\tInvalid input...";
			break;
		}
	cout<<"\n\n\t\tTry another [Y/N] : ";
	cin>>ans;
	if(ans=='y'||ans=='Y')
	goto x;
	getch();
}



