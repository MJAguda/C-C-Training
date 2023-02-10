#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
restart:
system("cls");
	int thlevel;
	double elixir,gold;
	char gender,reagain;
	cout<<"Input Gender [M/F] : ";
	cin>>gender;
		if(gender=='M'||gender=='m'||gender=='F'||gender=='f')
			{
			goto next_1;
			}
		else
			{
			cout<<"Invalid Input...";
			goto end;
			}
next_1:
	cout<<"Input TH Level: ";
	cin>>thlevel;
		if(thlevel>=1&&thlevel<=11)
			{
			goto next_2;
			}
		else
			{
			cout<<"Invalid Input...";
			goto end;
			}
next_2:
	cout<<"Input Elixir : ";
	cin>>elixir;
		if(elixir>=1)
			{
			goto next_3;
			}
		else
			{
			cout<<"Invalid Input...";
			goto end;
			}
next_3:
	cout<<"Input Gold : ";
	cin>>gold;
		if(gold>=1)
			{
			goto next_4;
			}
		else
			{
			cout<<"Invalid Input...";
			goto end;
			}
next_4:
		switch(gender)
		{
		case 'M':
		case 'm':
			{
			cout<<"The player belongs to PINOY ";
				{
				if(thlevel<=3)
					{
					cout<<"LOW ";
					}
				else if(thlevel>=4&&thlevel<=7)
					{
					cout<<"MID ";
					}
				else if(thlevel>=8)
					{
					cout<<"HIGH ";
					}
				}
				{
				if(elixir<=250000)
					{
					cout<<"GIANTS ";
					}
				else if(elixir>=250001&&elixir<=750000)
					{
					cout<<"GOBLINS ";
					}
				else if(elixir>=750001)
					{
					cout<<"ARCHER ";
					}
				}
				{
				if(gold<=250000)
					{
					cout<<"ARCHER CLANS.";
					}
				else if(gold>=250001&&gold<=750000)
					{
					cout<<"GOBLINS CLANS.";
					}
				else if(gold>=750001)
					{
					cout<<"GIANTS CLANS.";
					}
				}
			}
			break;
		case 'F':
		case 'f':
			{
			cout<<"The player belongs to PINOY ";
				{
				if(thlevel<=3)
					{
					cout<<"LOW ";
					}
				else if(thlevel>=4&&thlevel<=7)
					{
					cout<<"MID ";
					}
				else if(thlevel>=8)
					{
					cout<<"HIGH ";
					}
				}
				{
				if(elixir<=250000)
					{
					cout<<"GIANTS ";
					}
				else if(elixir>=250001&&elixir<=750000)
					{
					cout<<"GOBLINS ";
					}
				else if(elixir>=750001)
					{
					cout<<"ARCHER ";
					}
				}
				{
				if(gold<=250000)
					{
					cout<<"ARCHER CLANS.";
					}
				else if(gold>=250001&&gold<=750000)
					{
					cout<<"GOBLINS CLANS.";
					}
				else if(gold>=750001)
					{
					cout<<"GIANTS CLANS.";
					}
				}
			}
			break;
		default: cout<<"Invalid Input";
			break;
		}
	cout<<"Do you want to retry AGAIN? LOL [Y/N] : ";
	cin>>reagain;
		if(reagain=='Y'||reagain=='y')
			{
			goto restart;
			}
end:
getch();
}
