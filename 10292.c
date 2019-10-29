/*求四个整数的和与平均值，平均值保留一位小数。*/
#include<stdio.h>
int main(void)
{
    int a,b,c,d,sum;
    float avg;
    printf("Enter a,b,c,d:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sum=a+b+c+d;
    avg=sum/4.0f;/*可加上f f为float*/
    printf("Sum is %d,average is %.1f\n",sum,avg); /*Sum中s大写，average与avg*/
    return 0;
}
