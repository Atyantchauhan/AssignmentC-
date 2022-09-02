#include <stdio.h>
int main()
{
   int n,i,crn=1,prv=-1,next =0;
   printf("Enter Nth Number ");
   scanf("%d",&n);
   
   for(i=1;1;i++){
   	next = crn + prv;
   	prv = crn;
   	crn = next;
   	if(next==n || n==0 || n==1){
   		printf("True");
   		break;
	   }
	  if(n<next ){
	  	printf("False");
	  	break;
	  }
   }
   	
   
    return 0;
}

