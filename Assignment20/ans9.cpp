//9. Write a program to print the elements of an array in reverse order



#include<stdio.h>
void reverse(int *p,int size);
void reverse(int *p,int size){
	int i;
	printf("reverse element is ");
	for(i=size-1;i>=0;i--){
	   printf("%d\n ",*(p+i));
}
}
int main(){
	int arr[10];
	printf("Enter 10 Number : ");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	} 
    reverse(arr,10);
}