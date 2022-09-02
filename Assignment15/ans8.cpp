#include<stdio.h>
void UniqueElement(int arr[], int size){
	int i,result=0,j;
	for(i=0;i<size;i++){
		
		 for(j=i+1;j<=size;j++){
		 	if(arr[i]==-1){
			 break;
		}
		
		 	if(arr[i]==arr[j]){
		         arr[j]=-1;
		         break;
			 }else{
			 	printf("%d",arr[i]);
			 	break;
			 }
		 }
		 
	}

}
int main()
{
	int i,size;
	int arr[100];
	printf("Enter  Number size of arr ");
	scanf("%d",&size);
 
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	UniqueElement(arr,size);
	
}
