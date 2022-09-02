#include<stdio.h>
float circle(float);
int main(){
	 float radius; 
	 printf("Enter radius of circle ");
	 scanf("%f",&radius);
     printf("%f",circle(radius));
     return 0;
}
float circle(float r){
	float area = 3.14*r*r;
	return area;
}
