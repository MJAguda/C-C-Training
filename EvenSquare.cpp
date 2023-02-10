#include<iostream>

using namespace std;

int main(){
	
	int array[3][3], i, j;
	
	cout << "Enter elements for a 3x3 array : ";
	for(i=0 ; i<3; i++){ //input array elements
		for(j=0 ; j<3 ; j++){
			cin >> array[i][j];
		}
	}
	
	cout << endl << "Array[3][3] : " << endl;
	for(i=0 ; i<3; i++){ //input array elements
		for(j=0 ; j<3 ; j++){
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}
