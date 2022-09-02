#include <stdio.h>
int main()
{
int i,j,u,l;
printf("Enter a number ");
scanf("%d%d",&l,&u);

for(i=l+1;i<=u-1;i++){
	for(j=2;j<u;j++){
		if(i%j==0){
			break;
		}
	}
	if(j==i){
		printf("%d ",i);
	}
}
    return 0;
}
