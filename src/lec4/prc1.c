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
        printf("positive ");
    }
    else if (n < 0)
    {
        printf("negative ");
    }
    else
    {
        printf("zero ");
    }

    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }

    return 0;
}
