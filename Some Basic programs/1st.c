//calculate total and average marks of 5 students
#include<stdio.h>
void main()
{
    int phy,che,math,eng,hindi;
    int total;
    double Avg;
    printf("Enter the marks of 5 subjects:");
    scanf("%d%d%d%d%d",&phy,&che,&math,&eng,&hindi);
    total=phy+che+math+eng+hindi;
    printf("Total marks:%d\n",total);
    Avg=total/5;
    printf("Average:%lf",Avg);

}
