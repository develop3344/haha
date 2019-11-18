/* 输出斐波那契Fibonacci 数列
前两项都为1，从第三项起 为 前两项之和
f(n)=f(n-1) */
# include <stdio.h>
int main (void)
{
    int i,n,f1=1,f2=1,f3;

    printf("Enter n:\n");
    scanf("%d",&n);

    printf(" %d  %d ",f1,f2); /*注意 %d 与 %d 之间的空格 决定 f1,f2 之间的距离*/
    for( i=3;i<=n;i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;

        printf(" %d ",f3); /*注意 %d 与 引号 之间的空格 决定 f3 之间的距离*/
        /*注意 此printf 处于循环中 */
    }
    printf("\n");
    return 0;
}