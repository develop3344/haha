/*版本1美化*/
#include <stdio.h>
int main(void)
{
    int t, M;
    double s, m;
    printf("Enter s(>=0),t(>=0):\n");
    scanf("%lf%d", &s, &t);
    if (s <= 3)
    {
        if (t < 5)
        {
            m = 10;
        }
        if (t >= 5)
        {
            m = 10 + t / 5 * 2;
        }
    }
    if (3 < s <= 10)
    {
        if (t < 5)
        {
            m = 10 + (s - 3) * 2;
        }
        if (t >= 5)
        {
            m = 10 + (s - 3) * 2 + t / 5 * 2;
        }
    }
    if (s > 10)
    {
        if (t < 5)
        {
            m = 10 + (s - 3) * 2 + (s - 10) * 1;
        }
        if (t > 5)
        {
            m = 10 + (s - 3) * 2 + (s - 10) * 1 + t / 5 * 2;
        }
    }
    M = (m + 0.5); /*Money 四舍五入 */
    printf("M is %d\n", M);
    return 0;
}