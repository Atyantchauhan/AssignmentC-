#include<stdio.h>
int SimpleInter(int,int,int);
int main(){
	int p,r,t; 
	 printf("Find SI\nPlease Enter P R T ");
	 scanf("%d%d%d",&p,&r,&t);
     printf("%d",SimpleInter(p , r, t));
     return 0;
}
int SimpleInter(int p , int r , int t){
	int SI = (p*r*t)/100 ;
	return SI;
}
