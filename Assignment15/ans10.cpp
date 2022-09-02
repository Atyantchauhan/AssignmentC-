//#include<stdio.h>
//void frequency(int arr[],int size){
//	int i,j,count;
//	
//	for(i=0;i<size;i++){
//	     count=1;
//	     if(arr[i]!=-1 ){
//	     		for(j=i+1;j<size;j++){
//			      if(arr[i] == arr[j]){
//			      	count++;
//				    arr[j] = -1;
//		    	}   
//		 }
//	     
//		}
//		
//   if(arr[i]!= -1){
//	   	printf("frequency of %d is %d\n", arr[i],count);
//	   	
//	 }
//		
//		
//	 
//	}
//}
//int main(){
//	int arr[100];
//	int size,i;
//	printf("Enter length of Number ");
//	scanf("%d",&size);
//	printf("Enter number ");
//	for(i=0;i<size;i++){
//		scanf("%d",&arr[i]);
//    } 
//    frequency(arr,size);
//}



//======================================Hashing=======================================



#include<stdio.h>
void frequency(int arr[], int size){
	int fr[100]={0};
	int i=0;
	while(i<size){
		fr[arr[i]]++;
		i++;
	}
	
	for(i=0;i<100;i++){
		if(fr[i] != 0){
			printf("%d==>%d\n",i,fr[i]);
		}
	}
}
int main(){
	int arr[100];
	int size,i;
	printf("Enter size of arr ");
	scanf("%d",&size);
	printf("Enter Number ");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	frequency(arr,size);
}
