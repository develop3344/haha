/*阶梯电价 月用电量与电费 见41页下面题2*/
#include <stdio.h>
int main(void)
{
    double x, y;
    printf("Enter x(x>=0):\n");
    scanf("%lf", &x);
    if (x <= 50)
    {
        y = 0.53 * x;
    }
    else
    {
        y = 0.53 * 50 + (x - 50) * 0.58;
    }
    printf("y is %.2f\n", y);
    return 0;
}