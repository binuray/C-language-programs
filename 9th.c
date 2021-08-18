//print first N natural number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    getch();
}