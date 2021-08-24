#include<stdio.h>
#include<conio.h>
void fun();
int a;//global variable
void main()
    {
                printf("%d\n",a);
                fun();
    }
    void fun()
    {
        printf("%d",a);//global variable can be accessed anywhere in the program
    }
