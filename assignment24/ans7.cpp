//7. Write a function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>
using namespace std;
int sum(int,int=0,int=0);
int sum(int a,int b,int c){
	return a+b+c;
}
int main(){
	int a,b,c;
	cout<<"Enter 3 Number ";
	cin>>a>>b>>c;
	cout<<"sum of 3 number is "<<	sum(a,b,c);
	cout<<endl;
	cout<<"sum of a and b is "<<sum(a,b);
	cout<<endl;
	cout<<"sum of a is "<<sum(a);
	return 0;
}