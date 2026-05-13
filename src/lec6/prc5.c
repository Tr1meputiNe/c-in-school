#include <stdio.h>

int main(void)
{
    int i;
    long long x = 1;
    long long sum = 0;

    for (i = 1; i <= 20; i++)
    {
        x = x * i;
        sum = sum + x;
    }

    printf("%lld\n", sum);
    return 0;
}
