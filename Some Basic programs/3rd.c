//program to check leap year
#include<stdio.h>
void main()
{
    int year;
    printf("Enter the year which u want to check:\n");
    scanf("%d",&year);
    if(year%4==0||year%4==0&&year%100!=0)
    {
        printf("year is leap year");
    }
    else{
        printf("year is not leap year");
    }
}