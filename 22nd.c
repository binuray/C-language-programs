//program to print INDIA in pattern
#include<stdio.h>
#include<string.h>
void main()
{
 char str[]="INDIA";
 int i,j,len;
 len=strlen(str);
 for(i=0;i<len;i++)//row
 {
     for(j=0;j<=i;j++)//column
     {
         printf("%c ",str[j]);
     }
     printf("\n");
 }

}