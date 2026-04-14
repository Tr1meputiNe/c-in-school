#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int day =  a / 86400;
    a = a % 86400;
    int hour = a / 3600;
    a = a % 3600;
    int minute = a / 60;
    a = a % 60;
    int second = a;
    printf("%d天%d小时%d分钟%d秒\n", day, hour, minute, second);
    return 0;
}