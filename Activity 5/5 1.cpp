#include<iostream>
#include<conio.h>

using namespace std;

int main()
	{
	rep:
	
	int quiz;
	char ans,rep;
	
	cout<<"\n\t\tEnter the Score (0-10) : ";
	cin>>quiz;
	
	switch(quiz)
		{
		case 1:
		case 2: 
		case 3: 
		case 4: 
		case 5: cout<<"\n\t\t\tF";
			break;
		case 6: cout<<"\n\t\t\tD";
			break;
		case 7: cout<<"\n\t\t\tC";
			break;
		case 8: cout<<"\n\t\t\tB";
			break;
		case 9: 
		case 10: cout<<"\n\t\t\tA";
			break;
		default: cout<<"\n\t\t\tInvalid input...";
			break;
		}
	cout<<"\n\n\t\tTry Again [Y/N] : ";
	cin>>ans;
	
	if(ans=='y'||ans=='Y')
	goto rep;
	getch();

return 0;
}



