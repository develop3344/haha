/*顺序排列A至Z*/
#include <stdio.h>
int main (void)
{
    int i;
    for(i='A';i<='Z';i++)   / 降序 *i='Z';i>='A';i-- */
    {
        printf("%c",i);
    }
    printf("\n");
    return 0;
}
