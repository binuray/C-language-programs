//program to find max no. between two numbers
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("%d is greater ",a);
    else
    printf("%d is greater",b);
}