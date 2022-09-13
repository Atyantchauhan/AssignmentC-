//6. Define a function to swap data of two int variables using call by reference


#include<iostream>
using namespace std;
void swap(int&,int&);
void swap(int &x,int &y){
    int temp = x;
     	x = y;
     	y = temp;
}
int main(){
	int x,y;
	cout<<"Enter X ==> value ";
	cin>>x;
	cout<<"Enter Y ==> value ";
	cin>>y;
	swap(x,y);
	cout<<"X ====> is "<<x;
	cout<<endl;
	cout<<"Y ====> is "<<y;
	return 0;
}