// single program to find N number, sum of two numbers factorial of any number using switch case
#include<stdio.h>
void main()
{
    int a,b,n1,f=1,i,ch;
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Enter any no.");
        scanf("%d",&n1);
        for(i=1;i<=n1;i++)
        {
            printf("%d",i);
        }
        break;
        case 2:
        printf("Enter two no.");
        scanf("%d%d",&a,&b);
        n1=a+b;
        printf("sum=%d",n1);
        break;

        case 3:
        printf("Enter any number:");
        scanf("%d",&n1);
        for(i=1;i<=n1;i++)
        {
            f=f*i;
        }
        printf("Factorial=%d",f);
        break;
        default:
        printf("Invalid choice");
        break;
    }
}