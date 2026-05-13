#include <stdio.h>

int main(void)
{
    double w;
    double fee;

    if (scanf("%lf", &w) != 1)
    {
        return 1;
    }

    if (w < 0)
    {
        printf("输入错误\n");
        return 0;
    }

    if (w <= 1)
    {
        fee = 10;
    }
    else if (w <= 5)
    {
        fee = 10 + (w - 1) * 3;
    }
    else
    {
        fee = 10 + 4 * 3 + (w - 5) * 5;
    }

    printf("%.2f\n", fee);
    return 0;
}
