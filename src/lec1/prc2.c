#include <stdio.h>
#include <math.h>


int main()
{
    float a, b, c, d, e;
    a = 1000 * (1 + 0.03*5);
    b = (1000 * (1 + 0.021*2)) * (1 + 0.0275*3);
    c = (1000 * (1 + 0.0275*3)) * (1 + 0.021*2);
    d = (1000 * pow(1.015, 5));
    e = (1000 * pow((1 + 0.015/4), 4 * 5));
    printf("%f\n%f\n%f\n%f\n%f\n", a, b, c, d, e);
    return 0;
}