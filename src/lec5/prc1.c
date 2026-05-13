#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;

    if (scanf("%d %d %d", &a, &b, &c) != 3)
    {
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
    {
        printf("无法构成三角形\n");
    }
    else if (a == b && b == c)
    {
        printf("等边三角形\n");
    }
    else if (a == b || a == c || b == c)
    {
        printf("等腰三角形\n");
    }
    else
    {
        printf("普通三角形\n");
    }

    return 0;
}
