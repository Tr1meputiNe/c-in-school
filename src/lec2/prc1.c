#include <stdio.h>

int main()
{
    int a;
    scanf("%x", &a);
    int b = 0;
    while (a != 0)
    {
        int t = a % 16;
        b = b * 16 + t;
        a /= 16;
    }
    printf("%04x\n", b);
    return 0;       
}