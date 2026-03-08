#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("偶数\n");
    } else {
        printf("奇数\n");
    }

    return 0;
}
