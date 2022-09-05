//1. Write a program to find the number of vowels in each of the 5 strings stored in two 
//dimensional arrays, taken from the user.


#include<stdio.h>
#include<string.h>
int main(){
	char str[5][10];
	char strV[11] = "aeiouAEIOU";
	int j,k;
	int count=0;
	printf("Enter 5 name ");
	int i;
	//====================================  Get value =======================================
	for(i=0;i<5;i++){
		gets(str[i]);
	}
   
   
   //====================================  check value =======================================
   
   for(i=0;i<5;i++){
   	count =0;
   	  for(j=0;str[i][j];j++){
   	  	for(k=0;k<10;k++){
   	  		if(strV[k] == str[i][j])
   	  		count++;
   	  		break;
			 }
			
		 }
		 
	
		  printf("%s ==> %d\n",str[i],count);
		 
		  
   }
  
   
   return 0;
} 
