#include<iostream.h>
#include<conio.h>

void main()
{
restart:
clrscr();
double month,day;
int year;
char gender,reagain;
	cout<<"Enter Gender [M/F] : ";
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
	cout<<"Enter Year : ";
	cin>>year;
		if(year>=1)
			{
			goto next_2;
			}
		else
			{
			cout<<"Invalid Input...";
			goto end;
			}
next_2:
	cout<<"Enter Month : ";
	cin>>month;
		if(month>=1&&month<=12)
			{
			goto next_3;
			}
		else
			{
			cout<<"Invalid Input...";
			goto end;
			}
next_3:
	cout<<"Enter Day : ";
	cin>>day;
		if(day>=0)
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
		if(year%4==0&&year%100!=0)
			{
			cout<<"The name of the newly born baby is ANDREW ";
			}
		if(year%4!=0)
			{
			cout<<"The name of the newly born bay is DANIEL ";
			}
		if((month==1&&day>=20&&day<=31)||(month==2&&day<=18&&day>=1))
			{
			cout<<"AQUIRIUS ";
			}
		if((month==2&&day>=19&&day<=29)||(month==3&&day<=20&&day>=1))
			{
			cout<<"PISCES ";
			}
		if((month==3&&day>=21&&day<=31)||(month==4&&day<=19&&day>=1))
			{
			cout<<"ARIES ";
			}
		if((month==4&&day>=20&&day<=30)||(month==5&&day<=20&&day>=1))
			{
			cout<<"TAURUS ";
			}
		if((month==5&&day>=21&&day<=31)||(month==6&&day<=20&&day>=1))
			{
			cout<<"GEMINI ";
			}
		if((month==6&&day>=21&&day<=30)||(month==7&&day<=22&&day>=1))
			{
			cout<<"CANCER ";
			}
		if((month==7&&day>=23&&day<=31)||(month==8&&day<=22&&day>=1))
			{
			cout<<"LEO ";
			}
		if((month==8&&day>=23&&day<=31)||(month==9&&day<=22&&day>=1))
			{
			cout<<"VIRGO ";
			}
		if((month==9&&day>=23&&day<=30)||(month==10&&day<=22&&day>=1))
			{
			cout<<"LIBRA ";
			}
		if((month==10&&day>=23&&day<=31)||(month==11&&day<=21&&day>=1))
			{
			cout<<"SCORPIO ";
			}
		if((month==11&&day>=22&&day<=30)||(month==12&&day<=21&&day>=1))
			{
			cout<<"SAGITTARIUS ";
			}
		if((month==12&&day>=22&&day<=31)||(month==1&&day<=19&&day>=1))
			{
			cout<<"CAPRICORN ";
			}
		if(month>=3&&month<=5)
			{
			cout<<"SUMMER.";
			}
		if(month>=6&&month<=8)
			{
			cout<<"SPRING.";
			}
		if(month>=9&&month<=11)
			{
			cout<<"AUTUMN.";
			}
		if(month==12||month==2||month==1)
			{
			cout<<"WINTER";
			}
		else
			{
			cout<<"Invalid Input...";
			}
		}
	break;
	case 'F':
	case 'f':
		{
		if(year%4==0&&year%100!=0)
			{
			cout<<"The name of the newly born baby is MELICE ";
			}
		if(year%4!=0)
			{
			cout<<"The name of the newly born bay is ANDREA ";
			}
		if((month==1&&day>=20&&day<=31)||(month==2&&day<=18&&day>=1))
			{
			cout<<"AQUIRIUS ";
			}
		if((month==2&&day>=19&&day<=29)||(month==3&&day<=20&&day>=1))
			{
			cout<<"PISCES ";
			}
		if((month==3&&day>=21&&day<=31)||(month==4&&day<=19&&day>=1))
			{
			cout<<"ARIES ";
			}
		if((month==4&&day>=20&&day<=30)||(month==5&&day<=20&&day>=1))
			{
			cout<<"TAURUS ";
			}
		if((month==5&&day>=21&&day<=31)||(month==6&&day<=20&&day>=1))
			{
			cout<<"GEMINI ";
			}
		if((month==6&&day>=21&&day<=30)||(month==7&&day<=22&&day>=1))
			{
			cout<<"CANCER ";
			}
		if((month==7&&day>=23&&day<=31)||(month==8&&day<=22&&day>=1))
			{
			cout<<"LEO ";
			}
		if((month==8&&day>=23&&day<=31)||(month==9&&day<=22&&day>=1))
			{
			cout<<"VIRGO ";
			}
		if((month==9&&day>=23&&day<=30)||(month==10&&day<=22&&day>=1))
			{
			cout<<"LIBRA ";
			}
		if((month==10&&day>=23&&day<=31)||(month==11&&day<=21&&day>=1))
			{
			cout<<"SCORPIO ";
			}
		if((month==11&&day>=22&&day<=30)||(month==12&&day<=21&&day>=1))
			{
			cout<<"SAGITTARIUS ";
			}
		if((month==12&&day>=22&&day<=31)||(month==1&&day<=19&&day>=1))
			{
			cout<<"CAPRICORN ";
			}
		if(month>=3&&month<=5)
			{
			cout<<"SUMMER.";
			}
		if(month>=6&&month<=8)
			{
			cout<<"SPRING.";
			}
		if(month>=9&&month<=11)
			{
			cout<<"AUTUMN.";
			}
		if(month==12||month==2||month==1)
			{
			cout<<"WINTER";
			}
		else
			{
			cout<<"Invalid Input...";
			}
		}

	break;
	}
	gotoxy(20,7);
	cout<<"Do you want to retry AGAIN? [Y/N] : ";
	cin>>reagain;
	if(reagain=='Y'||reagain=='y')
		{
		goto restart;
		}
end:
getch();
}