#include<iostream>

using namespace std;

int main(){
	
	int first=1, second=1, next=0, i, n;
	
	cout << "Enter number of terms : ";
	cin >> n;
	
	for(i=0 ; i<n ; i++){
		if(i<=1){
			next = second;
		}
		else{
			next = first+second;
			first = second;
			second = next;
		}
		cout << next << " ";
	}
}
