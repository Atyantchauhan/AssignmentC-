//10. Write a C++ program to add all the numbers of an array of size 10.


#include<iostream>
using namespace std;
int main(){
	int arr[10];
	int i,temp=0;
	cout<<"Enter 10 Number ";
    for(i=0;i<10;i++){
    	cin>>arr[i];
	}
	for(i=0;i<10;i++){
		temp += arr[i];
	}
	cout<<"Sum of all number is "<<temp;
	
	return 0;
}