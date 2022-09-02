#include<stdio.h>
int LcmFunc(int , int);
int main(){
int a,b;
printf("Enter two numbr ");
scanf("%d%d",&a,&b);
printf("LCM is %d",LcmFunc(a,b));
}
int LcmFunc(int a ,int b){
	int max = a<b ? b : a;
	int i;
			for(i=1;i<=a*b;i++,max++){
				if(max%a==0 &&  max%b==0){
					 return max;
					break;
				}
			}
	}

