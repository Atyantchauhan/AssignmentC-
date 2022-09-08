//7. Write a program to calculate the difference between two time periods

#include<stdio.h>
#include<string.h>

struct time{
	int hour;
	int minute;
	int second;
};
// get  input function
struct time input(){
	struct time temp;
	printf("Enter hours : ");
	scanf("%d",&temp.hour);
	printf("Enter minute : ");
	scanf("%d",&temp.minute);
	printf("Enter second : ");
	scanf("%d",&temp.second);
	return temp;
	
}

void sortStruct(){
		
	struct time  diffsecond;

	// get  input 
	
		printf("Enter first time \n");
	    struct time t1 = input();
		printf("Enter second time \n");
		struct time t2 = input();

	// logic second
	if(t1.second<=t2.second){
	   diffsecond.second =	t2.second-t1.second;
	}else{
		diffsecond.second = t2.second += 60 - t1.second;
		t2.minute = t2.minute-1;
	}
	
		// logic minute
	if(t1.minute<=t2.minute){
	   diffsecond.minute =	t2.minute-t1.minute;
	}else{
		diffsecond.minute = t2.minute += 60 - t1.minute;
		t2.hour = t2.hour-1;
	}
	
	
	// logic hour
	if(t1.hour<t2.hour){
	   diffsecond.hour =	t2.hour-t1.hour;
	}else{
		diffsecond.hour = t2.hour - t1.hour;
	}
	
	
	// display 
	
	printf("\n difference between two time periods ");
		printf("%d:%d:%d\n",diffsecond.hour,diffsecond.minute,diffsecond.second);
	
}

int main(){
	sortStruct();
}