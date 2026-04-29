#include <stdio.h>

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    if (n > 0)
    {
        printf("正数 ");
    }
    else if (n < 0)
    {
        printf("负数 ");
    }
    else
    {
        printf("0 ");
    }

    if (n % 2 == 0)
    {
        printf("偶数\n");
    }
    else
    {
        printf("奇数\n");
    }

    return 0;
}
