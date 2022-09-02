#include<stdio.h>
int combi(int , int );
int main(){
	int n,r;
	printf("Enter  the number of item ");
	scanf("%d",&n);
	printf("Enter the number of selected item ");
	scanf("%d",&r);
	printf("%d",combi(n,r));
}
int combi(int n ,int r){
	int i;
	int nResult=1;
	int rResult=1;
	int nrResult=1;
	for(i=1;i<=n;i++){
		nResult = i*nResult;
	}

	for(i=1;i<=r;i++){
		rResult = i*rResult;
	}
	for(i=1;i<=n-r;i++){
		nrResult = i*nrResult;
	}
int result = nResult/(rResult*nrResult);
   return result;
}
