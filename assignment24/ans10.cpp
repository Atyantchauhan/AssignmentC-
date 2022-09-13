//10. Write functions using function overloading to add two numbers having different data
//types.





#include<iostream>
using namespace std;
int sum(int , int);
float sum(float,float);
float sum(float x , float y){	
	return x+y;
}
int sum(int x , int y){
	return x+y;
}
int main(){
	float x;
	float y;
	cout<<"Enter two number : ";
	cin>>x>>y;
	cout<<"sum of x and y "<<sum(x,y)<<endl;
	  
	  
	int a;
	int b;
	cout<<"Enter two number : ";
	cin>>a>>b;
	cout<<"sum of a and b "<<sum(a,b);

	
	return 0;
}