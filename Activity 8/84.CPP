#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int i=0, ctr=0;
char array[10];
cout << "Enter 10 letters followed by a period:\n";
cin >> array[i];
while ((array[i]!='.') && (i<10))
{
ctr++;
i++;
cin >> array[i];
}
cout << "The letters you entered in reverse order are: \n";
for (i=ctr-1;i>=0;i--)
cout << array[i] << endl;
getch();
}