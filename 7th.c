//program to swap two numbers using third variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d \n%d",a,b);
    getch();
}
//swapping two numbers without using third variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n %d",a,b);
    getch();
}