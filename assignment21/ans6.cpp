//6. Write a function to sort employees according to their names [refer structure from
//question 1]

#include<stdio.h>
#include<string.h>

struct employees{
	int id;
	char name[20];
	float salary;
};
// get  input function
struct employees input(){
	struct employees temp;
	printf("Enter the id of employee : ");
	scanf("%d",&temp.id);
	fflush(stdin);
	printf("Enter employee Name : ");
	fgets(temp.name,20,stdin);
	printf("Enter salary of employee : ");
	scanf("%f",&temp.salary);
	return temp;
	
}

void sortStruct(){
		
	struct employees person[5];
	int i;
	// get  input 
	for(i=0;i<5;i++){
		printf("Enter deatils of employees %d \n",i+1);
		person[i] = input();
		printf("\n");
	}
	
	// logic
	
	
	for(i=0;i<5;i++){
	    for(int j=i+1;j<5;j++){
	         if(strcmp(person[i].name,person[j].name)>0){
	    		struct employees temp = person[i];
	    		person[i] = person[j];
	    		person[j] = temp;
			}
		  
		}
		
	}
	// display 
	
	printf("\n  sort employees according to their salaries");
	for(i=0;i<5;i++){
		printf("employee id : %d\nemployee Name :%semployee salary : %f\n",person[i].id,person[i].name,person[i].salary);
	}
}

int main(){
	sortStruct();
}