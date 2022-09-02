#include <stdio.h>
int main()
{
int i,j,l;
printf("Enter a number ");
scanf("%d",&l);

for(i=l+1;1;i++){
	for(j=2;j<=i;j++){
		if(i%j==0){
			break;
		}
	}
	if(j==i){
		printf("%d ",i);
		break;
	}
}
    return 0;
}
