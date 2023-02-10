#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int i=0, ctr=0;
int array[10];
cout << "Enter 10 nonnegative nos: \n";
cin >> array[i];
while ((array[i]>0) && (i<10))
{
ctr++;
i++;
cin >> array[i];
array[i]=array[i]*2;
}
cout << "The numbers you entered times two are: \n";
for(i=0;i<ctr;i++)
cout << array[i] << endl;
getch();
}