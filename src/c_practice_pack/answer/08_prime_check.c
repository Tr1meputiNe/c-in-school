#include <stdio.h>

int main(void) {
    int n;
    int is_prime = 1;

    scanf("%d", &n);

    if (n < 2) {
        is_prime = 0;
    }

    for (int i = 2; i * i <= n && is_prime; i++) {
        if (n % i == 0) {
            is_prime = 0;
        }
    }

    if (is_prime) {
        printf("prime\n");
    } else {
        printf("not prime\n");
    }

    return 0;
}
