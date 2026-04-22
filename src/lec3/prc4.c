#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d", &x);
    switch ((x > 0) - (x < 0))
    {
    case -1:
        y = -1;
        break;
    case 0:
        y = 0;
        break;
    case 1:
        y = 1;
        break;
    }
    printf("%d\n", y);
    return 0;

}
