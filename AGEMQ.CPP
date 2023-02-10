#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();
	int age;
	int count_U = 0;
	int count_W = 0;
	int count_R = 0;
	int count;
	for(count=0; count<15; count++){
		cout << "Input age: ";
		cin >> age;
		if(age>=0 && age<=18){
			count_U++;
		}
		else if(age>=19 && age<=64){
			count_W++;
		}
		else{
			count_R++;
		}
	}
	cout << "\nrUnderage : " << count_U << endl;
	cout << "Working age: " << count_W << endl;
	cout << "Retiring age: " << count_R << endl;

	getch();
}