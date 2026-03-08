#include <stdio.h>

struct Student {
    char name[50];
    float score;
};

int main(void) {
    struct Student students[3];
    float sum = 0.0f;

    for (int i = 0; i < 3; i++) {
        scanf("%49s %f", students[i].name, &students[i].score);
        sum += students[i].score;
    }

    printf("%.2f\n", sum / 3.0f);
    return 0;
}
