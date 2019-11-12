/*求n的和*/
# include <stdio.h>
int main (void)
{
    int i,n,sum;
    sum=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    for( i =1 ; i<=n ; i++ )
    {
         sum=sum+i;
    }
    printf("Sum is %d\n",sum);
    return 0;
}
