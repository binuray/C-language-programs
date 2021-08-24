#include<stdio.h>

    struct stu
    {
        int a;
        char b;
        float c;
    };
    void main()
    {
        struct stu s;
        printf("Maximum size of structure is:%d\n",sizeof(s));
    }
