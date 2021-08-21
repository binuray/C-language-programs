//program to count digits in a number
#include<stdio.h>
void main()
{
    int n,count=0;
    printf("Enter no:");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf("Total of digits=%d\n",count);
}