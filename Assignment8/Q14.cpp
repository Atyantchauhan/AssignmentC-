#include <stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter of rows you want\n");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            if(j==1 || j==i || i==rows){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
