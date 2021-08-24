#include<stdio.h>
union stu
{
    int a;
    float b;
    char c;

};
void main()
{
    union stu s;
    s.a=65;
    printf("%c\n",s.c);
}