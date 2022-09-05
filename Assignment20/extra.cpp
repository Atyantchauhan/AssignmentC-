#include<stdio.h>

//function declaration
void sort(int* , int size);

// main function
int main(){
    int size = 5;
    int array[size];
    printf("Enter your values: ");
    for(int i = 0; i <size; i++){
        scanf("%d",&array[i]);
    }

    sort(array,size);

    for(int i = 0; i<size; i++){
        printf("%d ",array[i]);
    }
}

// function definition
void sort(int *array , int size){
    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
