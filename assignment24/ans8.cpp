//8. Define overloaded functions to calculate area of circle, area of rectangle and area of
//triangle


#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float,int,int);
// area of circle 
int area(int r){
	return 3.14*r*r;
}
// area of rectangle
int area(int l ,int b)
{
	return l*b;
}
// area of triangle
float area(float a ,int l ,int h){
	return a*l*h;
}
using namespace std;
int main(){
	int r;
	cout<<"Enter radius of circle : ";
	cin>>r;
	int l,b;
	cout<<"Enter l and b : ";
	cin>>l>>b;
	int l2,h;
	float n = 0.5;
    cout<<"Enter l and h : ";
    cin>>l2>>h;
	cout<<"Area of circle is : "<<area(r);
	cout<<endl;
	cout<<"Area of rectangle : " <<area(l,b);
	cout<<endl;
	cout<<"Area of triangle : "<<area(n,l2,h);
	
	return 0;
}