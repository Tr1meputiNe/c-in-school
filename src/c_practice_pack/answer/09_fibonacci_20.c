#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 1;

    for (int i = 0; i < 20; i++) {
        if (i == 0) {
            printf("%d", a);
        } else if (i == 1) {
            printf(" %d", b);
        } else {
            int next = a + b;
            printf(" %d", next);
            a = b;
            b = next;
        }
    }

    printf("\n");
    return 0;
}
