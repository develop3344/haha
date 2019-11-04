/*求n的绝对值*/
#include <stdio.h>
int main(void)
{
    int x, y;
    printf("Enter x:\n");
    scanf("%d", &x);
    if (x <= 0)
    {
        y = -x;
    }
    else
    {
        y = x;
    }
    printf("y is %d\n", y);
    return 0;
}

