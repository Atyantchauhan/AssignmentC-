#include<stdio.h>
int main(){
	char ch;
	printf("You want check odd or even y/n ");
	scanf("%c",&ch);
	int even;
	
	switch(ch){
		case 'y':
		printf("Enter Even Number for check upper nearest odd Number ");
		scanf("%d",&even);
	    if(even%2==0)
	       printf("%d",even+1);	   	
		else 
	    	printf("Please Enter even number You have Only 1 Chance Now ");
	    	
		if(even%2==1)
		  {
	     	scanf("%d",&even);
	        if(even%2==0)
	          printf("%d",even+1);	 
		  }
		   
	    break; 
	    case 'n':
	    	printf("Thank You !");
	    	
			
	}
}
