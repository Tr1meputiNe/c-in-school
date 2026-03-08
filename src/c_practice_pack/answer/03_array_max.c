#include <stdio.h>

int main(void) {
    int a[5];
    int max;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("max = %d\n", max);
    return 0;
}
