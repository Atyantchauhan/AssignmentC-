
// Define a function to print Pascal Triangle up to N lines.


#include<iostream>
using namespace std;
void pascal(int);
int fact(int);
// main
int main(){
	int x;
	cout<<"Enter a Number ";
	cin>>x;
	pascal(x);
	return 0;
}
// pascal
void pascal(int x){
int i,j;
	for(i=0;i<=x;i++){
		for(int k = 1; k < x-i+1; k++)
            cout<<"   ";
		for(j=0;j<=i;j++){
			cout<<"   ";
			int result = fact(i)/(fact(j)*fact(i-j));
			cout<<result;
			cout<<"   ";
		}
		cout<<endl;
	}
	
}
// factorial 
int fact(int n){
    int flag = 1;
    int i;
	for(i=1;i<=n;i++)
	    flag *= i;

    return flag;
	}
