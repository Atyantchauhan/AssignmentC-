#include<stdio.h>
void fovfun(int);
int main(){
	int num;
	printf("Enter a number ");
	scanf("%d",&num);
	fovfun(num);
	return 0;
}
void fovfun(int num){
    int i,crnt=-1,perv=1,nxt=0;
    for(i=1;i<=num;i++){
     
        crnt=perv;
        perv=nxt;
        printf("%d ",nxt);
        nxt=perv+crnt;
        
	}
}
