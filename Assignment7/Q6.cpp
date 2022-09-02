#include <stdio.h>
int main()
{
int i,j,x=100;
for(i=1;i<=x;i++){
	for(j=2;j<x;j++){
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
