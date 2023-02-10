#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class arrayproblem{
	int i, j, k, n, temp,array[];
	
public:
	void prob1();
	void prob2();
	void prob3();
	void prob4();
	void prob5();
	void prob6();
	void prob7();
	void prob8();
	void prob9();
	void prob10();
	void prob11();
	void prob12();
	void prob13();
	void prob14();
	void prob15();
	void prob16();
	void prob17();
	void prob18();
	void prob19();
	void prob20();
	void prob21();
	void prob22();
	void prob23();
	void prob24();
	void prob25();
	void prob26();
	void prob27();
};

void arrayproblem::prob1(){ //Write a C++ program to find the largest element of a given array of integers.
	
	int large = 0;
	
	cout << "Enter length of array : ";
	cin >> n;
	
	array[n];
	
	cout << "Enter " <<n<< " elements : ";
	for(i=0 ; i<n ; i++){ //array input
		cin >> array[i];
	}
	
	
	
	for(i=n-1 ; i>n-4 ; i--){ //Check largest number and store it to large
		if(array[i] > large){
			large = array[i];
		}
	}
	cout << "The largest number : " << large;
}

void arrayproblem::prob2(){ //Write a C++ program to find the largest three elements in an array.
	
	int first, second, third;
  	
  	cout << "Enter length of the Array : ";
  	cin >> n;
  	
  	array[n];
  	
  	cout << "Enter " <<n<< " elements : ";
  	for(i=0 ; i<n ; i++){
  		cin >> array[i];
	  }
  	
  	cout << "Original array: ";
		    for (i=0; i < n; i++) 
		    cout << array[i] <<" ";
  	
    if (n<3){
        cout << "Invalid Input";
    }
    
    for (i=0 ; i<n ; i++){
    	if (array[i] > first){
        	third = second;
        	second = first;
            first = array[i];
        }
        else if (array[i] > second){
        	third = second;
        	second = array[i];
        }
  
        else if (array[i] > third)
        	third = array[i];
    }
		cout << "\nThree largest elements are: " <<first <<", "<< second <<", "<< third;
}

void arrayproblem::prob3(){ //Write a C++ program to find second largest element in an given array of integers.
	
	cout << "Enter length of Array : ";
	cin >> n;
	
	array[n];
	
	cout << "Enter " <<n<< " elements : ";
	for(i=0 ; i<n ; i++){
		cin >> array[i];
	}
	
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << array[i] <<" ";
    
    int i, first_element, second_element;
 
    /* There should be atleast two elements */
    if (n<2){
        cout<< " Invalid Input ";
        return;
    }
    
    first_element = second_element = INT_MIN;
 
    for (i=0; i<n ; i ++){
        if (array[i] > first_element){
            second_element = first_element;
            first_element = array[i];
        }
 
        else if (array[i] > second_element && array[i] != first_element){
            second_element = array[i];
        }
    }
    if (second_element == INT_MIN){
        cout<< "No second largest element";
     }
    else{ 
        cout<< "\nThe second largest element is: " <<second_element;
     }
}

void arrayproblem::prob4(){ //Write a C++ program to find k largest elements in a given array of integers.	
	cout << "Enter length of Array : ";
	cin >> n;
	
	array[n];
	
	cout << "Enter " <<n<< " elements : ";
	for(i=0 ; i<n ; i++){
		cin >> array[i];
	}
	
	cout << "Original array: ";
	for (i=0; i < n; i++) 
    cout << array[i] <<" ";
    
    for(i=0 ; i<n ; i++){
    	for(j=i+1 ; j<n ; j++){
    		if(array[i] < array[j]){
    			temp = array[i];
    			array[i] = array [j];
    			array[j] = temp;
			}
		}
	}
    
    cout << "\nEnter k largest number : ";
    cin >> k;
    
    cout << k<<" large numbers : ";
	for (i=0 ; i<k ; i++)
        cout << array[i] << " ";
}

void arrayproblem::prob5(){ //Write a C++ program to find the smallest and second smallest elements in a given array of integers.

	cout << "Enter length of the Array : ";
	cin >> n;
	
	array[n];
	
	cout << "Enter "<<n<<" elements : ";
	for(i=0 ; i<n ; i++){
		cin >> array[i];
	}
	
	for(i=0 ; i<n ; i++){
		for(j=i+1 ; j<n ; j++){
			if(array[i] > array [j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	
	cout << "\nSmallest : " <<array[0]<<endl;
	cout << "Second Smallest : " <<array[1]<<endl;
}

void arrayproblem::prob6(){ //Write a C++ program to find all elements in array of integers which have at-least two greater elements.
	cout << "Enter length of the Array : ";
	cin >> n;
	
	array[n];
	
	cout << "Enter " <<n<< " elements : ";
	for(i=0 ; i<n ; i++){
		cin >> array[i];
	}
	
	for(i=0 ; i<n; i++){
		for(j=i+1 ; j<n ; j++){
			if(array[i] < array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	
	cout << "Element : " << array[2];
	
}

void arrayproblem::prob7(){ //Write a C++ program to find the most occurring element in an array of integers.
	
	cout << "Enter length of Array : ";
	cin >> n;
	
	int array[n];
	
	cout << "Enter " <<n<< " elements : ";
	for(i=0 ; i<n ; i++){
		cin >> array[i];
	}
    
    cout << "Original array: ";
    for (int i=0 ; i<n ; i++) 
    cout << array[i] <<" ";
    
    int max_count = 0;
  	cout << "\nMost occurred number: ";
  	for (int i=0; i<n; i++)
  	{
	int count=1;
   	for (int j=i+1;j<n;j++)
       	if (array[i]==array[j])
           	count++;
   	if (count>max_count)
      	max_count = count;
  	}

  	for (int i=0 ; i<n ; i++)
  	{
   	int count=1;
   	for (int j=i+1 ; j<n ; j++)
       	if (array[i]==array[j])
           	count++;
   	if (count==max_count)
       	cout << array[i] << endl;
  	}    
}

void arrayproblem::prob8(){ //Write a C++ program to find the next greater element of every element of a given array of integers. Ignore those elements which have no greater element.
	
	cout << "Enter length of array : ";
	cin >> n;
	
	array[n];
	
	cout << "Enter "<<n<<" elements :";
	for(i=0 ; i<n ; i++){
		cin >> array[i];
	}
	
	for(i=0 ; i<n ; i++){
		for(j=i+1 ; j<n ; j++){
			if(array[i] > array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	
	cout << "Sorted Element : ";
	for(i=0 ; i<n ; i++){
		cout << array[i] << " ";
	}
	
	cout << "\nElement greater : ";
	for(i=0 ; i<n-1 ; i++){
		cout << array[i+1] <<" ";
	}
}

void arrayproblem::prob9(){ //
	
}

void arrayproblem::prob10(){
	
}

void arrayproblem::prob11(){
	
}

void arrayproblem::prob12(){
	
}

void arrayproblem::prob13(){
	
}

void arrayproblem::prob14(){
	
}

void arrayproblem::prob15(){
	
}

void arrayproblem::prob16(){
	
}

void arrayproblem::prob17(){
	
}

void arrayproblem::prob18(){
	
}

void arrayproblem::prob19(){
	
}

void arrayproblem::prob20(){
		
}

void arrayproblem::prob21(){ // Write a C++ program to find the two repeating elements in a given array of integers.
	int nums[] = {1, 2, 3, 5, 5, 7, 8, 8, 9, 9, 2}; 
    int i, j;
    int size = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (i = 0; i < size; i++) 
    cout << nums[i] <<" ";
    cout  << "\nRepeating elements: ";
    for(i = 0; i < size; i++)
    for(j = i+1; j < size; j++)
      if(nums[i] == nums[j])
        cout <<  nums[i] << " ";
}

void arrayproblem::prob22(){ //Write a C++ program to find the missing element from two given arrays of integers except one element.
	int array1[] = {3, 1, 5, 7, 9};
    int array2[] = {3, 7, 5, 9};
     int mn;
     int s1 = sizeof(array1) / sizeof(array1[0]);
    int s2 = sizeof(array2) / sizeof(array2[0]);
        if (s1 != s2-1 && s2 != s1-1)
    {
        cout << "Invalid Input";
    }
    
    cout << "Original arrays: ";
    
    cout << "\nFirst array: ";
    for (int i=0; i < s1; i++) 
    cout << array1[i] <<" ";
    
    cout << "\nSecond array: ";
    for (int i=0; i < s2; i++) 
    cout << array2[i] <<" ";
    
	mn=0;
	
	for (int i=0; i<s1; i++)
       mn = mn^array1[i];
    for (int i=0; i<s2; i++)
       mn = mn^array2[i];
    cout <<"\nMissing number: " << mn;
}

void arrayproblem::prob23(){ //Write a C++ program to find the element that appears once in an array of integers and every other element appears twice.
	int array1[] = {3, 1, 5, 1, 5, 7, 9, 7, 9};
    int se;
 
    int s1 = sizeof(array1) / sizeof(array1[0]);
    
    cout << "Original array: ";
    
    for (int i=0; i < s1; i++) 
    cout << array1[i] <<" ";
    
    se = array1[0];
        for (int i = 1; i < s1; i++)
            se = se ^ array1[i];
            
    cout <<"\nSingle element: " << se;
}

void arrayproblem::prob24(){
	
}

void arrayproblem::prob25(){ //Write a C++ program to find and print all common elements in three sorted arrays of integers. 
    int array1[] = {1, 5, 7, 8, 9, 11};
    int array2[] = {6, 8, 10, 11, 12, 16};
    int array3[] = {1, 3, 5, 6, 8, 10, 11, 17}; 
    
    int s1 = sizeof(array1)/sizeof(array1[0]);
    int s2 = sizeof(array2)/sizeof(array2[0]);
    int s3 = sizeof(array3)/sizeof(array3[0]);
    
    cout << "Original arrays: ";
    cout << "\nArray1: ";
    for (int i=0; i < s1; i++) 
    cout << array1[i] <<" ";
    cout << "\nArray2: ";
    for (int i=0; i < s2; i++) 
    cout << array2[i] <<" ";
    cout << "\nArray3: ";
    for (int i=0; i < s3; i++) 
    cout << array3[i] <<" ";
    cout <<"\nCommon elements of the said sorted arrays: ";
    int i = 0, j = 0, k = 0;
   while (i < s1 && j < s2 && k < s3)
    {
        if (array1[i] == array2[j] && array2[j] == array3[k])
         {  
             cout << array1[i] << " ";   
			 i++;
			 j++; 
			 k++;
		 }
 
        else if (array1[i] < array2[j])
             i++;
 
        else if (array2[j] < array3[k])
             j++;
 
        else
             k++;
    }
}

void arrayproblem::prob26(){ //Write a C++ program to find and print all unique elements of a given array of integers.
	cout << "Enter length of Array : ";
	cin >> n;
	
	array[n];
	
	cout << "Enter "<<5<<" element : ";
	for(i=0 ; i<n ; i++){
		cin >> array[i];
	}
	
	cout << "Original array: ";
    
    for (i=0 ; i<n ; i++) 
    cout << array[i] <<" ";
    
    cout <<"\nCommon elements of the said array: ";
    for (i=0; i<n; i++)
    {
        for (j=0; j<i; j++)
           if (array[i] == array[j])
               break;
         if (i == j)
          cout << array[i] << " ";
    }
}

void arrayproblem::prob27(){ //Write a C++ program to find the number of pairs of integers in a given array of integers whose sum is equal to a specified number.
	
	cout << "Enter length of Array : ";
	cin >> n;
	
	array[n];
	
	cout << "Enter "<<5<<" element : ";
	for(i=0 ; i<n ; i++){
		cin >> array[i];
	}

    cout << "Original array: ";
    
    for (int i=0 ; i<n; i++) 
    cout << array[i] <<" ";
    
    int sum = 12, ctr = 0;
    cout <<"\nArray pairs whose sum equal to 12: ";
    
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if (array[i]+array[j] == sum)
              {
                cout << array[i] << "," << array[j];
                ctr++;
              }
 
    cout <<"\nNumber of pairs whose sum equal to 12: ";
    cout << ctr;	
}

int main(){
	start:
	system("cls");
	
	arrayproblem ar; //creating a copy of the class
	
	int i, chc;
	
	cout << "Array Problems : " <<endl;
	for(i=1 ; i<=27 ; i++){
		cout << "[" <<i<<"] - Problem " <<i<<endl;	
	}
	cout << "--------------------------------" <<endl;
	cout << "Enter problem number : ";
	cin >> chc;
	cout << "--------------------------------" <<endl;
	
	switch(chc){
		case 1:{	
			ar.prob1();
			break;
		}
		case 2:{
		   	ar.prob2();
			break;
		}
		case 3:{
			ar.prob3();
			break;
		}
		case 4:{
			ar.prob4();
			break;
		}
		case 5:{
			ar.prob5();
			break;
		}
		case 6:{
			ar.prob6();
			break;
		}
		case 7:{
			ar.prob7();
			break;
		}
		case 8:{
			ar.prob8();
			break;
		}
		case 9:{
			ar.prob9();
			break;
		}
		case 10:{
			ar.prob10();
			break;
		}
		case 11:{
			ar.prob11();
			break;
		}
		case 12:{
			ar.prob12();
			break;
		}
		case 13:{
			ar.prob13();
			break;
		}
		case 14:{
			ar.prob14();
			break;
		}
		case 15:{
			ar.prob15();
			break;
		}
		case 16:{
			ar.prob16();
			break;
		}
		case 17:{
			ar.prob17();
			break;
		}
		case 18:{
			ar.prob18();
			break;
		}
		case 19:{
			ar.prob19();
			break;
		}
		case 20:{
			ar.prob20();
			break;
		}
		case 21:{
			ar.prob21();
			break;
		}
		case 22:{
			ar.prob22();
			break;
		}
		case 23:{
			ar.prob23();
			break;
		}
		case 24:{
			ar.prob24();
			break;
		}
		case 25:{
			ar.prob25();
			break;
		}
		case 26:{
			ar.prob26();
			break;
		}
		case 27:{
			ar.prob27();
			break;
		}
		default:{
			goto start;		
			break;
		}
	}	
	getch();
	return 0;
}
