#include <stdio.h>
#include <math.h>

int main()
{
    float d = 300000.0;
    float p = 6000.0;
    float r = 0.01;

    float m = log10(p / (p - d * r)) / log10(1 + r);
    float a = round(m * 10.0) / 10.0;

    printf("%.1f\n", a);
    return 0;
}
