//program to swap two matrices using 2D Array:-
#include<stdio.h>
void main()
{
    int i,j,a[2][2],b[2][2],temp[2][2];
    printf("Enter value of first matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][i]);
        }
    }
    printf("Enter value of second matrix\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][i]);
        }
    }
    printf("Before swapping");
    printf("First matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            temp[i][j]=a[i][j];
            a[i][j]=b[i][j];
            b[i][j]=temp[i][j];
        }
    }
    printf("After swapping\n");
    printf("First matrix\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
     printf("Second matrix \n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

}