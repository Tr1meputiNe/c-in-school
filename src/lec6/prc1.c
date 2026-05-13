#include <stdio.h>
#include <math.h>

int main(void)
{
    int sign;
    int count1 = 0;
    int count2 = 0;
    double pi;
    double n;
    double term;

    sign = 1;
    pi = 0.0;
    n = 1.0;
    term = 1.0;
    while (fabs(term) >= 1e-6)
    {
        pi = pi + term;
        n = n + 2;
        sign = -sign;
        term = sign / n;
        count1++;
    }
    pi = pi * 4;
    printf("1e-6: %d %.8f\n", count1, pi);

    sign = 1;
    pi = 0.0;
    n = 1.0;
    term = 1.0;
    while (fabs(term) >= 1e-8)
    {
        pi = pi + term;
        n = n + 2;
        sign = -sign;
        term = sign / n;
        count2++;
    }
    pi = pi * 4;
    printf("1e-8: %d %.8f\n", count2, pi);

    return 0;
}
