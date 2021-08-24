//program to print array elements
#include<stdio.h>
void main()
{
    int a[5],i;
    printf("Enter Array elements:");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Array elements: \n");
    for(i=0;i<=5;i++)
    {
        printf("%d\n",a[i]);
    }
}