#include <stdio.h>

int main(void) {
    char str[100];
    int len = 0;

    scanf("%99s", str);

    while (str[len] != '\0') {
        len++;
    }

    printf("len = %d\n", len);
    return 0;
}
