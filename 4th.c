#include<stdio.h>
#include<conio.h>
void fun()
{
    int a=10;//local variable 
    static int b=20;//static variable
    printf("%d\n%d",a,b);
    a++;
    b++;
}
void main()
{
    fun();
    getch();
    //fun(); if we call fun() again than o/p is 10 and 21 because the scope of local variable is within the block but of static variable is within the main method
}