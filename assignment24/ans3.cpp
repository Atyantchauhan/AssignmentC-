//3. Define a function to calculate x raised to the power y.



#include<iostream>
using namespace std;
int power(int ,int);
int power(int x,int y){
	int i;
	int result =1;
	for(i=1;i<=y;i++){
	     result *= x;
	}
	return result;
}
int main()
{ 
int x;
int y;
cout<<"Enter a Number ";
cin>>x;
cout<<"Enter power of Numbr ";
cin>>y;
cout<<endl<<"solution "<<power(x,y);
 
 
    return 0; 
     
}