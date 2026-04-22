#include <stdio.h>

int main()
{
    float x, y;
    float h = 0;
    scanf("%f,%f", &x, &y);

    if ((x - 2) * (x - 2) + (y - 2) * (y - 2) <= 1)
    {
        h = 10;
    }
    else if ((x + 2) * (x + 2) + (y - 2) * (y - 2) <= 1)
    {
        h = 10;
    }
    else if ((x + 2) * (x + 2) + (y + 2) * (y + 2) <= 1)
    {
        h = 10;
    }
    else if ((x - 2) * (x - 2) + (y + 2) * (y + 2) <= 1)
    {
        h = 10;
    }

    printf("%.0f\n", h);
    return 0;

}
