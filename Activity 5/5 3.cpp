#include<iostream.h>
#include<conio.h>

void main()
	{
	y:
	clrscr();
	char character,x,y;
	cout<<"\n\tDetermine Vowel and Consonant";
	cout<<"\n\n\t\tEnter a Letter : ";
	cin>>character;
	if((character>='a'&&character<='z')||(character>='A'&&character<='Z'))
	switch(character)
		{
		case 'a':	
		case 'A':
		case 'e':
		case 'E':
		case 'i': 
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U': cout<<"\n\t\t\tIt is Vowel";
			break;
		default:cout<<"\n\t\t\tIt is Consonant";
			break;
		}
	else
		{
		cout<<"\n\t\t\tIt is not a Letter!";
		}
		cout<<"\n\n\t\tTry again [Y/N] : ";
		cin>>x;
		if(x=='Y'||x=='y')
		goto y;
		getch();
}




