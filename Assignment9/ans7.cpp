#include<stdio.h>
int main(){
	float unit,bill;
	printf("Enter Your Unit ");
	scanf("%f",&unit);
	int amountView ; // for check unit size and make switch condtion;
	
	if(unit <=50)
    	amountView  = 1;
	else if(unit<=100)
	        amountView  = 2;
    else if(unit<=250)
        amountView  = 3;
   else
	   amountView  = 4;
	
	
	switch(amountView ){
	   case 1:
	     bill = unit*0.50+0.20;
	   	 printf("\nRupee %.2f",bill);
	   	 break;
	   case 2:
	     bill= 25 + (unit-50)*0.75+0.20;
	   	 printf("\nRupee %.2f",bill);
	   	 break;
	   case 3:
	   	 bill = 100 + (unit-150)*1.20+0.20;
	   	 printf("\nRupee %.2f",bill);
	   	 break;
	   	case 4:
	   	 bill = 220 + ( unit-250)*1.50+0.20;
	   	 printf("\nRupee %.2f",bill);
	   	 break;
	   	
	}
	

}

