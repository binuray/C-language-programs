//program to insert element at ending position of array
#include<stdio.h>
void main()
{
    int a[100],n,i,item;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Insert elements in array:");
    scanf("%d",&item);
    n=n+1;
    a[n-1]=item;
    printf("After insertion elements at the ending of array:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}