#include <stdio.h>

int main(void)
{
    int a, n, i;
    int x = 0;
    int sum = 0;

    scanf("%d %d", &a, &n);

    for (i = 1; i <= n; i++)
    {
        x = x * 10 + a;
        sum = sum + x;
    }

    printf("%d\n", sum);
    return 0;
}
