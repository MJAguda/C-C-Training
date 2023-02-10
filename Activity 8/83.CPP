#include<iostream.h>
#include<conio.h>
void fill_up(int a[],int size)
{
clrscr();
	cout <<"Enter "  << size << " numbers: \n";
	for (int i=0;i<size;i++)
		cin >> a[i];
	size--;
	cout << "The last array index used is " << size << endl;
}
void show(int a[], int size)
{
	cout << "The numbers you entered are: \n";
	for (int i=0; i<size; i++)
		cout << a[i] << endl;
}

void main()
{
int b[5], count = 5;
fill_up(b, count);
show(b, count);
getch();
}