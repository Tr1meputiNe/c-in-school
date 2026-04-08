#include <stdio.h>

int main()
{
    char c = 'C';
    char h = 'h';
    char i = 'i';
    char n = 'n';
    char a = 'a';
    putchar(c + 4);
    putchar(h + 4);
    putchar(i + 4);
    putchar(n + 4);
    putchar(a + 4);
    putchar('\n');
    printf("%c%c%c%c%c\n", c + 4, h + 4, i + 4, n + 4, a + 4);
    return 0;
}