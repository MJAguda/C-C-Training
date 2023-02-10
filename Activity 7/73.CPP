#include<iostream.h>
#include<conio.h>
#include<stdio.h>
char lower,upper;

char Itou(char c1);

void main()
{
clrscr();
	printf("Enter a lowercase characters : ");
	scanf("%c",&lower);
	upper=Itou(lower);
	printf("The uppercase equivalent is %c\n",upper);
getch();
}
char Itou(char c1)
{
char c2;
if(c1>='a'&&c1<='z')
c2='A'+c1-'a';
else
c2=c1;
return(c2);
}