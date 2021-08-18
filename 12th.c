//program to calculate sum of first N natural number
#include<stdio.h>
#include<conio.h>
void main()
{
   
    int n;
    int sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
}