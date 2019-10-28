#include<stdio.h>
int main(void)
{
    int x;
    printf("Enter x:\n");
    scanf("%d",&x);
    printf("x:%d-%d-%d\n",x/100,x/10%10,x%10);
    return 0;
}
/*x为一个三位数，求它的个位 十位 百位*/