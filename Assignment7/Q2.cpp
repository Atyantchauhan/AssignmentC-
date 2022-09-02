#include <stdio.h>
int main()
{
   int n,i,crn=1,prv=-1,next =0;
   printf("Enter N Number ");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
   	next = crn + prv;
    printf(" %d ",next);
   	prv = crn;
   	crn = next;
   }
  
    return 0;
}
