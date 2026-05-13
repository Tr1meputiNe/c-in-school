#include <stdio.h>

int main(void)
{
    int m, n, a, b, c, d, t;
    
    scanf("%d %d", &m, &n);
    

    a = m;
    b = n;
    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }

    c = a;
    d = m / c * n;
    printf("%d %d\n", c, d);
    return 0;
}
