//8. Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
#include<stdlib.h>

//main function
int main(){
    int *dangling;
    {
        dangling = (int*)malloc(sizeof(int));
        *dangling = 1; // the address of this danling pointer  by malloc 
        printf("i am not a dangling pointer: %d",*dangling);
        free(dangling);
    }
    *dangling = 2; // the address of this dangling is garbage ;
    printf("\n\nnow i am a dangling pointer and i am using Illegal use of pointer : %d",*dangling); //because we free the memory so now the pointer doesn't point anywhere;
}