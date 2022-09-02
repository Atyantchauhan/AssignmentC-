#include<stdio.h>
int main(){
	int day;
	printf("\n 1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n7. Sunday ");
	printf("\n Enter  Your day...");
	scanf("%d",&day);
	switch(day){
		case 1:
			printf("Happy Monday !");
			break;
	    case 2: 
	        printf("Happy Tuesday !");
	        break;
	    case 3: 
	        printf("Happy Wednesday !");
	        break;
	    case 4: 
	        printf("Happy Thursday !");
	        break;
	    case 5: 
	        printf("Happy Friday !");
	        break;
	    case 6: 
	        printf("Happy Saturday !");
	        break;
	    case 7: 
	        printf("Happy Sunday !");
	        break;
	    default :
	    	printf("Please Enter Valid day ! ");
	}
}
