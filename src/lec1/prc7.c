#include <stdio.h>

int main()
{
    float r, h;
    const float PI = 3.1415926;
    scanf("%f", &r);
    scanf("%f", &h);
    float c = 2 * PI * r;
    float s = PI * r * r;
    float b = 4 * PI * r * r;
    float bv = 4 * PI * r * r * h / 3;
    float v = PI * r * r * h;
    printf("圆周长：%.2f\n圆面积：%.2f\n球表面积：%.2f\n球体积：%.2f\n圆柱体积：%.2f\n", c, s, b, bv, v);
    return 0;
}