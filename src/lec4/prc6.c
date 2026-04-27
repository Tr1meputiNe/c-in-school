#include <stdio.h>

int main(void)
{
    int n;
    int d3;
    int d5;
    int d7;
    int count;

    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    d3 = (n % 3 == 0);
    d5 = (n % 5 == 0);
    d7 = (n % 7 == 0);
    count = d3 + d5 + d7;

    if (count == 3)
    {
        printf("Divisible by 3, 5 and 7.\n");
    }
    else if (count == 2)
    {
        printf("Divisible by ");
        if (d3 && d5)
        {
            printf("3 and 5.\n");
        }
        else if (d3 && d7)
        {
            printf("3 and 7.\n");
        }
        else
        {
            printf("5 and 7.\n");
        }
    }
    else if (count == 1)
    {
        if (d3)
        {
            printf("Divisible by 3 only.\n");
        }
        else if (d5)
        {
            printf("Divisible by 5 only.\n");
        }
        else
        {
            printf("Divisible by 7 only.\n");
        }
    }
    else
    {
        printf("Not divisible by 3, 5 or 7.\n");
    }

    return 0;
}
