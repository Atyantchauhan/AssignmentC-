#include<stdio.h>
int main(){

	
 while(1){
 	int num,x,y;
	printf("\n1. Addition\n2. Subtraction\n3. Multipliction\n 4. Devision\n 5. Exit\n\n ");
	printf("Enter Your Choice ");
	scanf("%d",&num);
 		switch(num){
		case 1:
			printf("Enter two Number ");
        	scanf("%d%d",&x,&y);
			printf("Addition %d\n",x+y);
			break;
	    case 2:
	    	printf("Enter two Number ");
        	scanf("%d%d",&x,&y);
	    	printf("Substraction %d\n",x-y);
	    	break;
	     case 3:
	     	printf("Enter two Number ");
        	scanf("%d%d",&x,&y);
	    	printf("Multiplication %d\n",x*y);
	    	break;
	    case 4:
	    	printf("Enter two Number ");
        	scanf("%d%d",&x,&y);
	    	printf("Division is %d\n",x/y);
	    	break;
	    case 5 :
	    	break;
	    default :
		   printf("Enter valid nummber \n") ;	
			
	}
	if (num == 5){
		break;
	}
}
 }
