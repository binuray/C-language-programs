//program to print tribonacci series
#include<stdio.h>
void main()
{
    int n,i,a=0,b=1,c=2,d;
    printf("Enter no. of terms");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d ",a);
        d=a+b+c;
        a=b;
        b=c;
        c=d;
    }
}