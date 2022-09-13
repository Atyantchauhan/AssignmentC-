//2. Define a function to find the highest value digit in a given number


#include<iostream>
int highest(int);
int highest(int x){
	int result = 0;
	while(x!=0){
		x%10>result?result=x%10:result;
		x = x/10;
		
	}
	return result;
	
}
using namespace std;
int main(){
	int x;
	cout<<"Enter a Number : ";
	cin>>x;
	cout<<"Highest digit in Number is : "<<highest(x);
	return 0;
}


