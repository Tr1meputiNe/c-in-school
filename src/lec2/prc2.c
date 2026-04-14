#include <stdio.h>

int main()
{
    float r;
    scanf("%f", &r);
    float c = 2 * 3.1415926 * r;
    float s = 3.1415926 * r * r;
    printf("圆周长: %f\n圆面积: %f\n", c, s);
    return 0;
}