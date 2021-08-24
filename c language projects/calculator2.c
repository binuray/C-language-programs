#include<stdio.h>
void main()
{
    float a,b,c;
    char ch;
       printf("Enter your choice to perform operation\n");
    scanf("%c",&ch);
    printf("Enter first number:\n");
    scanf("%f",&a);
    printf("Second number:\n");
    scanf("%f",&b);
    switch(ch)
    {
        case'+':
        c=a+b;
        printf("Addition=%f",c);
        break;
        case '-':
        c=a-b;
        printf("Substraction=%f",c);
        break;
        case '*': 
        c=a*b;
        printf("Multiplication=%f",c);
        break;
        case '/':
        c=a/b;
        printf("Division=%f",c);
        break;
        default:
        printf("Invalid case");
        break;
    }
}