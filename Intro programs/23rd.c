//program to print pyramid pattern
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)//row
    {
        for(j=5;j>i;j--)//left-side space
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)//middle and right-side space
        {
            printf("*");
        }
        printf("\n");
    }

}