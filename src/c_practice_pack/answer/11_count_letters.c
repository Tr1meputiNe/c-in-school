#include <stdio.h>

int main(void) {
    char str[256];
    int count = 0;

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
