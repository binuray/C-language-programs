//program to print array elements in reverse order
#include<stdio.h>
void main()
    {
        int a[5],i;
        printf("Enter Array elements:");
        for(i=0;i<=5;i++)
        {
            scanf("%d",&a[i]);

        }
        printf("\nReverse Array elements:");
        for(i=6;i>=0;i--)
        {
            printf("%d\n",a[i]);
        }
    }
