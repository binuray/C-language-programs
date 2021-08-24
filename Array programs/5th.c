//program to insert elements at the given position/any position of array:-
#include<stdio.h>
void main()
{
    int a[100],i,pos,size,item;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter array elements");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position where you have to insert elements");
    scanf("%d",&pos);
    printf("Enter element to insert in array:\n");
    scanf("%d",&item);
    for(i=size;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=item;
    size++;
    printf("The elements of array are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
}