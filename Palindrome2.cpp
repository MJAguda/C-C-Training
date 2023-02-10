#include<iostream>

using namespace std;

int main(){
	
	string str;
	string rev;
	int n, i, j;
	
	cout << "Enter a String : ";
	getline(cin, str);
	 
	n = str.length();
	
	for(i=n-1, j=0 ; i>=0 ; i--, j++){
		rev[j] = str[i];
	}
	
	for(i=0 ; i<n ; i++){
		rev += str.substr(n-1-i,1);
	}
	
	cout << "Reverse of the string : ";
	cout << rev;
	
	cout << endl;
	
	if(str==rev){
		cout << "The String is a Palindrome.";
	}
	else{
		cout << "The String is not a Palindrome.";
	}
	
}
