//program to reverse a number
#include<stdio.h>
void main()
{
    //input 234----->432
    int n,r;
    printf("Enter number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        printf("%d\n",r);
        n=n/10;
    }
}