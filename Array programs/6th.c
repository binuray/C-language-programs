//program to copy one array elements to another:-
#include<stdio.h>
void main()
{
    int a1[100],a2[100],i,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("first array elements:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a1[i]);
    }
    printf("copying array elements:");
    for(i=0;i<n;i++)
    {
        a2[i]=a1[i];
    }
    printf("Second array elements:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a2[i]);
    }
}