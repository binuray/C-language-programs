//call by value program
#include<stdio.h>
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x=%d   y=%d\n",x,y);
}
void main()
{
    int a=10,b=20;
    printf("a=%d   b=%d\n",a,b);
    swap(a,b);
}