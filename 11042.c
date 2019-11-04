/*求n的绝对值*/
#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter n:\n");
    scanf("%d", &n);
    if (n<= 0)
    {
        n = -n;
    }
    printf("|n| = %d\n", n);
    return 0;
}