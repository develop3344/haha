/*求四个整数的和与平均值，平均值保留一位小数。*/
#include<stdio.h>

int main(void)
{
    int a=10,b=20,c=30,d=40,sum;
    float avg;
    sum=a+b+c+d;
    avg=sum/4.0f;         /*可以加上f,float  avg与aver*/
    printf("Sum is %d,average is %.1f\n",sum,avg); /*S大写,average*/
    return 0;
}