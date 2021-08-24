//program to insert element at the begining
#include<stdio.h>
void main()
{
    int a[100],n,i,item;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Insert elements in array at begining:");
    scanf("%d",&item);
    n++;
    for(i=n;i>1;i--)
    {
        a[i-1]=a[i-2];
    }
    a[0]=item;
    printf("Resultant array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}