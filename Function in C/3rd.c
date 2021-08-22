// call by reference program in c
#include<stdio.h>
void swap(int *p,int *q)//definition
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("p=%d    q=%d\n",*p,*q);
}
void main()
{
    int a=100,b=200;
    swap(&a,&b);//calling
    printf("a=%d    b=%d",a,b);
}