//program to make calculator without using 'Switch Case'
#include<stdio.h>
void main()
{
    int a,b,ch,add,sub,mul,div,rem;
    printf("'Enter user choice:");
    scanf("%d",&ch);
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(ch==1)
    {
        add=a+b;
        printf("Addition =%d",a+b);
    }
    else if(ch==2)
    {
           sub=a-b;
           printf("Substraction =%d",sub);

    }
    else if(ch==3)
    {
        mul=a*b;
        printf("Multiplication=%d",mul);
    }
    else if(ch==4)
    {
        div=a/b;
        printf("Division=%d",div);

    }
    else if(ch==5)
    {
        rem=a%b;
        printf("Remainder=%d",rem);
    }
    else{
        printf("Invalid case");
    }

}