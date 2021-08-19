//program to check a number is odd or even
#include<stdio.h>
void main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even Number\n");
    }
    else{
        printf("Odd Number");
    }
}
// check without using % operator
// int m,n;
// printf("Enter any number");
// scanf("%d",&n);
// m=n/2;
// if(m*2==n)
// {
//     printf("Even Number");
// }
// else{
//     printf("Odd Number");
// }