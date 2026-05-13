#include <stdio.h>

int main(void)
{
    char ch;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    while ((ch = getchar()) != '\n')
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            a++;
        }
        else if (ch == ' ')
        {
            b++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            c++;
        }
        else
        {
            d++;
        }
    }

    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}
