//program to check number is prime or not
#include<stdio.h>
void main()
{
    int n,count=0;
    printf("Enter Any Number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    printf("Number is prime");
    else
    printf("Number is not prime");
}
