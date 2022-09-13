//1. Define a function to check whether a given number is a Prime number or not.


#include<iostream>
using namespace std;
void prime(int);
void prime(int x){
	int i;
	for(i=2;i<=x;i++){
		if(x%i==0){
			break;
		}
	}
	if(i==x){
		cout<<"Prime";
	}else{
		cout<<"Not Prime";
	}
}
int main(){
	int x;
	cout<<"Enter a Numbr ";
	cin>>x;
	prime(x);
	return 0;
}