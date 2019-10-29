#include<stdio.h>
int main(void)
{
    int a,b,c,d,sum;
    float avg;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);
    printf("Enter c:\n");
    scanf("%d",&c);
    printf("Enter d:\n");
    scanf("%d",&d);
    sum=a+b+c+d;
    avg=sum/4.0f;/*可加上f f为float*/
    printf("Sum is %d,average is %.1f\n",sum,avg); /*Sum中s大写，average与avg*/
    return 0;
}
