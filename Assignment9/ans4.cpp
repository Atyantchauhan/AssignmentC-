#include<stdio.h>
int main(){
	int num,x,y,z;
	printf("1. Check whether isosceles triangle or not\n2.Check whether a right angle tringlr or Not\n3.Check whether are equilateral triangle or Not\n4. Exit");
	printf("\n Enter Your options ");
	scanf("%d",&num);
	switch(num){
		case 1:
			printf("Enter Three Number ");
			scanf("%d%d%d",&x,&y,&z);
			if(x==y || y== z){
				printf("isosceles triangle ");
			}
			else{
				printf("Not isosceles triangle");
			}
			break;
       case 2:
			printf("Enter Three Number ");
			scanf("%d%d%d",&x,&y,&z);
			if(x+y+z==180 &&  x == 90 || y == 90 || z == 90){
				printf(" right angle triangle ");
			}
			else{
				printf("Not right angle triangle");
			}
			break;
	    case 3:
			printf("Enter Three Number ");
			scanf("%d%d%d",&x,&y,&z);
			if(x==y && y== z){
			   printf("equilateral triangle");
			}
			else{
				printf("Not equilateral triangle");
			}
			break;
	    case 4:
		    break;
		default :
		     printf("Invalid Option..");		
				
	}
}
