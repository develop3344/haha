/*版本1*/
/*判断输入的年份是否为闰年
1. 能被4整除 但 不能被100整除
2. 能被400整除*/
/*选择 与&& 或||*/
# include<stdio.h>
int main(void)
{
    int year;
    printf("Enter year:\n");
    scanf("%d",&year);
    if  ((( year%4 == 0) && ( year%100 !=0 )) || ( year%400 == 0 )){
    printf("Yes\n");
    }else{
    printf("No\n");
    }
    return 0;
}