/*求n!*/
#include <stdio.h>
int main (void)
{
    int i,n,multiply;
    multiply=1;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       multiply= multiply*i;
    }
     printf("Multiply is %d\n",multiply);
    return 0;
}
