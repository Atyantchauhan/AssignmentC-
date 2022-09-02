//10. Write a program in C to Find the Frequency of Characters

#include<stdio.h>
#include<string.h>


int main(){
	char arr[]="atyant";
	int l,i,count=0;
    l = strlen(arr);
    char fr[150]={0};
    while(arr[i] != '\0'){
    	fr[arr[i++]]++;
    	// i++;
	}
    
    for(i=0;i<150;i++){
      if(fr[i] !=0){
      	printf("%c ==> %d\n",i,fr[i]);
	  }

	}
}
