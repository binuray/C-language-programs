//program to check a number is perfect or not
#include<stdio.h>
void main()
{   //input 6=(1+2+3)=6
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    printf("perfect number");
    else
    printf("not perfect number");
}