//3. Write a program to read and display a 2D array of strings in C language.



#include<stdio.h>
int main()
{
    char words[4][5] = {"word", "bird", "lost", "grid",};
    for(int i=0; i<4; i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%c", words[i][j]);
        }
        printf("   ");
        if(i==1){
        	 printf("\n\n");
		}
    }
    return 0;
}

