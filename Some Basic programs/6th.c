//program to check a character is vowel or consonant
#include<stdio.h>
void main()
{
char ch;
printf("Enter any character:");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
printf("Vowel\n");
else
printf("Not vowel");

}
