# include <stdio.h>
int main(void)
{
    float celsius,fahr;
    fahr=100;
    celsius=5*(fahr-32)/9;                 /*也可用5.0/9*(fahr-32)*/
    printf("celsius is %.2f\n",celsius);   /*%.2f表示两位小数*/
    return 0;
}