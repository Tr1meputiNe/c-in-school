#include <stdio.h>

int main(void)
{
    int k;
    float sum = 0.0;

    for (k = 1; k <= 100; k++)
    {
        sum = sum + k;
    }

    for (k = 1; k <= 50; k++)
    {
        sum = sum + k * k;
    }

    for (k = 1; k <= 10; k++)
    {
        sum = sum + 1.0 / k;
    }

    printf("%f\n", sum);
    return 0;
}
