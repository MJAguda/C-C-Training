#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string>
#include<math.h>

using namespace std;

void reverse(string str){
    size_t numOfChars = str.size();

    if(numOfChars == 1)
       cout << str << endl;
    else{
       cout << str[numOfChars - 1];
       reverse(str.substr(0, numOfChars - 1));
    }
}

void right_triangle(int row){
	cout << "Right Triagle \t:\t" <<endl;
	for(int i=1; i<=row ; i++){
		cout <<"\t\t\t";
		for(int j=1; j<=i ; j++){
			cout << "*";
		}
		cout <<endl;
	}
}

void cube(int n){
	int num[100];
	int i;
	
	cout << "Enter "<<n<< " numbers \t:\t";
	for(i=0 ; i<n ; i++){
		cin >> num[i];
		num[i] = num[i]*num[i]*num[i];
	}
	
	cout << "Cube of each number \t:\t";
	for(i=0 ; i<n ; i++){
		cout << num[i] <<" ";
	}
}

void root(int a, int b, int c){
	float root1, root2;
	cout<<endl;
	cout << "Stardard Form : " <<a<< "x^2 + " <<b<< "x + " <<c<<endl<<endl;
	cout << "Formula \t:\t(-b +- sqrt(b^2 - 4ac))/2a" <<endl<<endl;

	root1 = (-b + sqrt((b*b) - (4*a*c)))/(2*a);
	root2 = (-b - sqrt((b*b) - (4*a*c)))/(2*a);
	
	cout << "Roots \t\t:\t";
	cout << "x1 = " <<root1<<endl;
	cout << "x2 = " <<root2<<endl;
}

void sort(){
	int num [10];
	int i, j, temp, min;
	
	cout << "\nEnter 10 integers \t:\t";
	for(i=0 ; i<10 ; i++){
		cin >> num[i];
	}
	
   for (i=0 ; i<10 ; i++) {
      for (j=i+1 ; j<10 ; j++)
         if (num[i] > num[j]){
		      temp = num[i];
		      num[i] = num[j];
		      num[j] = temp;
		 }
   }
	
	cout << "Sort \t\t\t:\t";
	for(i=0 ; i<10 ; i++){
		cout << num[i] << " ";
	}
}

int main(){
loop:	
	
	system("cls");
	
	int chc;
	
	printf("MENU : \n");
	printf("[1] - String Reverse\n");
	printf("[2] - Right Triange\n");
	printf("[3] - Cube of number up to n number\n");
	printf("[4] - Roots of Quadratic Equation\n");
	printf("[5] - Arrange 10 integers from lowest to highest\n");
	printf("[6] - Exit\n\n");
	printf("Enter choice \t:\t");
	scanf("%d", &chc);
	
	cout << "--------------------------------" <<endl;;
	
	switch(chc){
		case 1 : { //Reverse of String
			string str;
		
  			cout << "Enter a String \t:\t";
    		cin >> str;
    		
    		cout << "Reverse \t:\t";
			reverse(str);
			break;
		}
		case 2 : { //Right Triangle
			int row;
			
			cout << "Enter row \t:\t";
			cin >> row;
			
			right_triangle(row);
			break;
		}
		case 3 : { //Cube of numbers
			int n;
			
			cout << "Enter number of terms\t:\t";
			cin >> n;
			
			cube(n);
			break;
		}
		case 4 : {
			int a, b, c;
			
			cout << "Enter A : ";
			cin >> a;
			cout << "Enter B : ";
			cin >> b;
			cout << "Enter C : ";
			cin >> c;
			
			root(a,b,c);
			break;
		}
		case 5 : {
		
			sort();
			
			break;
		}
		case 6 : {
			goto exit;
			break;
		}
		default: {
			goto loop;
			break;
		}
	}
	getch();
	goto loop;
exit:	
	return 0;
}
