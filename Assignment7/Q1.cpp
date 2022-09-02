#include <stdio.h>
int main()
{
   int n,i,crn=1,prv=-1,next =0;
   printf("Enter Nth Number ");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
   	next = crn + prv;
   	prv = crn;
   	crn = next;
   }
   printf("%d",next);
    return 0;
}
