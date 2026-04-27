#include <stdio.h>

int main(void)
{
    int x;
    int sign;

    if (scanf("%d", &x) != 1)
    {
        return 1;
    }

    if (x > 0)
    {
        sign = 1;
    }
    else if (x == 0)
    {
        sign = 0;
    }
    else
    {
        sign = -1;
    }

    printf("%d\n", sign);
    return 0;
}
