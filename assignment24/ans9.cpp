//9. Write functions using function overloading to find a maximum of two numbers and
//both the numbers can be integer or real

#include<iostream>
using namespace std;
int maximum(int , float);
int maximum(float,int);
int miximum(int x , float y){
	return x>y?x:y;
}
int miximum(float x , int y){
	return x>y?x:y;
}
int main(){
	int x;
	float y;
	cout<<"Enter two number : ";
	cin>>x>>y;
	maximum(x,y);
	miximum(x,y);
	return 0;
}

