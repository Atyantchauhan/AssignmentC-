#include<stdio.h>
int main(){
	char ch;
	int a,b,c,d;
	printf("You want to check Quadratic equation roots y/n ");
	scanf("%c",&ch);
	
	switch(ch){
		case 'y':
			printf("Enter cofficent of ax+bx^2+c ");
			scanf("%d%d%d",&a,&b,&c);
			d = b*b-4*a*c;
			d>0 ? printf("Real and distinct roots "):printf("Imaginary roots ");
			if(d==0)
				printf("Real and Equal roots ");
			break;
		 case 'n':
			printf("Thank You !");
		  
	}
	
}

