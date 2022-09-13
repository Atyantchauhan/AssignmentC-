//5. Define a function to check whether a given number is a term in a Fibonacci series or
//not.

#include<iostream>
using namespace std;
void fib(int);
void fib(int x){
	int p = -1,c = 1,n=0;
	int i;
	while(i<=i){
		n = p+c;
		p = c;
		c = n;
		if(n>x){
			break;
		}
		if(n==x){
			cout<<end;
			cout<<"Number is a term in fibonacci ";
			break;
		}
		
	}
	if(n>x){
		cout<<cout<<"Number is Not in a term in fibonacci ";
	}
}
int main(){
	int x;
    cout<<"Enter a Number ";
    cin>>x;
    fib(x);
	return 0;
}