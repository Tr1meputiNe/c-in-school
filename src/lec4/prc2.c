#include <stdio.h>

int main(void)
{
    int x;
    int s;

    if (scanf("%d", &x) != 1)
    {
        return 1;
    }

    if (x > 0)
    {
        s = 1;
    }
    else if (x == 0)
    {
        s = 0;
    }
    else
    {
        s = -1;
    }

    printf("%d\n", s);
    return 0;
}
