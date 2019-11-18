/* 输出斐波那契Fibonacci 数列
前两项都为1，从第三项起 为 前两项之和
f(n)=f(n-1) */
# include <stdio.h>
int main (void)
{
    int i,n,f1=1,f2=1,f3;
    double fact;

    printf("Enter n:\n");
    scanf("%d",&n);

    printf(" %d  %d ",f1,f2);
    for( i=3;i<=n;i++)
    {
        f3 = f1 + f2;
        fact=  f2*1.0/f3; /*数列越来越接近于 e */
        f1 = f2;
        f2 = f3;

        printf(" %d  %.3lf ",f3,fact);
    }
    printf("\n");
    return 0;
}