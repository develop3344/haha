#include<stdio.h>
int main(void)
{
    int a,b,c,d,sum;
    float avg;
    printf("Enter a,b,c,d:\n");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);/*有逗号则输入a，b，c,d不能用空格了，要加逗号 见下面terminal终端*/
    sum=a+b+c+d;
    avg=sum/4.0f;
    printf("Sum is %d,avg is %.1f\n",sum,avg);
    return 0;
}