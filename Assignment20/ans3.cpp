#include<stdio.h>
void sortArr(int *p,int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(p[i] > p[j]){
			    int temp = p[i];
			    p[i]   =  p[j];
			    p[j]  = temp;
			}
		}
	}
	
}
void display(int *p , int size ){
	for(int i=0;i<size;i++){
		printf("%d ",p[i]);
	}
}
int main(){
	int arr[10];
	printf("Enter a Number ");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	sortArr(arr,10);
	display(arr,10);

}
