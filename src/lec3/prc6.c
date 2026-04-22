#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 10)
    {
        printf("1\n");
        printf("%d\n", n);
        printf("%d\n", n);
    }
    else if (n < 100)
    {
        int a, b;
        a = n / 10;
        b = n % 10;
        printf("2\n");
        printf("%d %d\n", a, b);
        printf("%d%d\n", b, a);
    }
    else if (n < 1000)
    {
        int a, b, c;
        a = n / 100;
        b = n / 10 % 10;
        c = n % 10;
        printf("3\n");
        printf("%d %d %d\n", a, b, c);
        printf("%d%d%d\n", c, b, a);
    }
    else if (n < 10000)
    {
        int a, b, c, d;
        a = n / 1000;
        b = n / 100 % 10;
        c = n / 10 % 10;
        d = n % 10;
        printf("4\n");
        printf("%d %d %d %d\n", a, b, c, d);
        printf("%d%d%d%d\n", d, c, b, a);
    }
    else
    {
        int a, b, c, d, e;
        a = n / 10000;
        b = n / 1000 % 10;
        c = n / 100 % 10;
        d = n / 10 % 10;
        e = n % 10;
        printf("5\n");
        printf("%d %d %d %d %d\n", a, b, c, d, e);
        printf("%d%d%d%d%d\n", e, d, c, b, a);
    }

    return 0;

}
