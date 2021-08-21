//program to calculate tax on a salary
#include<stdio.h>
void main()
{
    double sal;
    double tax;
    printf("Enter salary:");
    scanf("%lf",&sal);
    if(sal<100000)
    {
        printf("No tax");
    }
    else if(sal>100000&&sal<=1000000)
    {
        tax=0.10*sal;
        printf("Tax=%lf",tax);
    }
    else if(sal>1000000&&sal<=10000000)
    {
        tax=0.25*sal;
        printf("tax=%lf",tax);

    }
    else{
        tax=0.40*sal;
        printf("'tax=%lf",tax);
    }
}