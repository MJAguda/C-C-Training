#include<iostream>
#include<conio.h>

using namespace std;

class rotation{
	int i, j, k,temp;
	
public:
	void right_rotate(char array[], int n, int nrot);
	void left_rotate(char array[], int n, int nrot);
};

void rotation::right_rotate(char array[], int n, int nrot){
	for(i=1 ; i<=nrot ; i++){
		temp = array[n-1];
		for(j=n-1, k=j-1 ; k>=0; j--, k--){
			array[j] = array[k];
		}
		array[0] = temp;
	}
	cout << "Rotated : ";
	for(i=0 ; i<n ; i++){
		cout << array[i];
	}
}

void rotation::left_rotate(char array[], int n, int nrot){
	for(i=1 ; i<=nrot ; i++){
		temp = array[0];
		for(j=0, k=j+1 ; j<n; j++, k++){
			array[j] = array[k];
		}
		array[n-1] = temp;
	}
	cout << "Rotated : ";
	for(i=0 ; i<n ; i++){
		cout << array[i];
	}
}

int main(){
	
	int i, n, nrot;
	char dir;
	
	system("CLS");
	
	rotation r;
	
	cout << "Enter Length of the Array : ";
	cin >> n;
	
	char array[n];
	
	cout << "Enter " <<n<< " elements : ";
	for(i=0 ; i<n ; i++){
		cin >> array[i];
	}
	
	cout << "Array is : ";
	for(i=0 ; i<n ; i++){
		cout << array[i] << " ";
	}
	
	cout << endl;
	
	cout << "Enter number of rotation : ";
	cin >> nrot;
	
dirloop:	
	cout << "Direction of Roation [R/L] : ";
	cin >> dir;

	switch(dir){
		case 'R':
		case 'r':{
				r.right_rotate(array, n, nrot);
			break;
		}
		case 'L':
		case 'l':{
				r.left_rotate(array, n, nrot);
			break;
		}
		default:{
			goto dirloop;	
			break;
		}
	}
	getch();
	return 0;
}
