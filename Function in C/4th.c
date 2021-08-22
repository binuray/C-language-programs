//function prototype and function definition in c
#include<stdio.h>
void max(int a, int b);//function protoytpe
void main()
{
    max(19,23);

}
void max(int a, int b)//function definition
{
    if(a>b)
    printf("%d is greater than %d\n",a,b);
    else
    printf("%d is less than %d\n",a,b);
}