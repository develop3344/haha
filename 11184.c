/* 输出斐波那契Fibonacci 数列
前两项都为1，从第三项起 为 前两项之和
百度公式 */
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

        printf(" -%08d  %.3lf ",f3,fact);/*注意 左右对齐 空格与0占位 */
        if (  i%5  == 0 )
        {
            printf("\n"); /*每行五项 第一行只有四项 逻辑 换行有问题、、、*/
        }
    }
    printf("\n");
    return 0;
}