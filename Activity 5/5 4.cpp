#include<iostream.h>
#include<conio.h>

void main()
	{
	rep:
	clrscr();
	float y;
	char ans,x,rep,a,b,c,A,B,C;
	cout<<"\n\t\tConverter";
	cout<<"\n\t\t\t[A]\t-\tTo convert to centimeter";
	cout<<"\n\t\t\t[B]\t-\tTo convert to kilometer";
	cout<<"\n\t\t\t[C]\t-\tTo convert to millimeter";
	cout<<"\n\t\tEnter your preference : ";
	cin>>x;
	switch(x)
		{
		case 'a':
		case 'A':	{
			cout<<"\n\t\t\tMeter to Centimeter";
			cout<<"\n\t\t\tEnter the Value = ";
			cin>>y;
			cout<<"\n\t\t\tMeter to Centimeter is equal = "<< y*100<<" centimeter/s";
			}
			break;
		case 'b':
		case 'B':	{
			cout<<"\n\t\t\tMeter to Kilometer";
			cout<<"\n\t\t\tEnter the Value = ";
			cin>>y;
			cout<<"\n\t\t\tMeter to Kilometer is equal = "<< y/1000<<" kilometer/s";
			}
			break;
		case 'c':
		case 'C':	 {
			cout<<"\n\t\t\tMeter to Millimeter";
			cout<<"\n\t\t\tEnter the Value = ";
			cin>>y;
			cout<<"\n\t\t\tMeter to Millimeter is equal = "<< y*1000<<" millimeter/s";
			}
			break;
		default:cout<<"\n\t\t\tInvalid input...";
			break;
		}
	cout<<"\n\n\t\tTry Again [Y/N] : ";
	cin>>ans;
	if(ans=='y'||ans=='Y')
	goto rep;
		getch();
}



