//4. Write a function to find the highest salary employee from a given array of 10
//employees. [ Refer structure from question 1]

#include<stdio.h>
#include<string.h>
struct employee {
	int id;
	char name[20];
	float salary;
};
// get deatils form user

struct employee input(){
    struct employee temp;
    printf("Enter your id: ");
    scanf("%d",&temp.id);
    fflush(stdin);
    printf("Enter your name: ");
    fgets(temp.name,20,stdin);
    temp.name[strlen(temp.name)-1] = '\0';
    printf("Enter your salary: ");
    scanf("%f",&temp.salary);
    return temp;
};

// print function
void display(struct employee deatials){
	printf("id - %d\nName - %s\nsalary - %f",deatials.id,deatials.name,deatials.salary);
};

// main function

int main(){
	int i;
	struct employee person[5];
	for ( i=0;i<5;i++){
		printf("Enter first Employee details %d \n",i+1);
		person[i] = input();
		printf("\n");
	}
	
     
     // logic for highest salary
     struct employee max = person[0];
     
     for( i=0;i<5;i++){
     	if(max.salary < person[i].salary){
     		 max = person[i];
		 }
	 }
	 printf("Highest salary employe is :\n");
	 display(max);
	
}