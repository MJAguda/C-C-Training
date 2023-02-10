#include<iostream>

using namespace std;

int main(){
	string str;
	int len;
	int lenbfr;
	int count =0;
	
	cout<<"Enter a string: ";
	cin>>str;
	len = str.length();
	lenbfr = len/2;
	
	for(int x=0; x<lenbfr; x++){
		if(str.substr(x,1) == str.substr(len-1-x,1)){
			count++;
		}		
	}	
	
	if(count == lenbfr){
		cout<<"its a palindrome"<<endl;
	}
	else{
		cout<<"its not a palindrome"<<endl;
	}
		
	system("pause");
	return 0;
}
