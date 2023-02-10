#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int sum=0, num;
	
	cout << "Enter number : ";
	cin >> num;
	
	while(num != 0){
		sum += num%10;	
		num = num/10;
	}
	
	cout << "The Sum of the digits is "<< sum;
	return 0;
}
