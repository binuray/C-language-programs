// program to check a person is eligible for vote or not
#include<stdio.h>
void main()
{
  int age;
  printf("Enter the age of the person:");
  scanf("%d",&age);
  if(age>=18)
  printf("Person is eligible for voting");
  else
  printf("person is not eligible for voting");
}
