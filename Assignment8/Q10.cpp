#include<stdio.h>
int main()
{
  int i,j,k;
  
  for(i=4;i>=1;i--)
  {
    for(j=1;j<4;j++)
    {
      if(j<=i)
        printf("%d",j);
      else
        printf(" ");
    }
    for(j=4;j>=1;j--)
    {
      if(j<=i)
        printf("%d",j);
      else
        printf(" ");
    }
    printf("\n");
  }
  return 0;

 }
