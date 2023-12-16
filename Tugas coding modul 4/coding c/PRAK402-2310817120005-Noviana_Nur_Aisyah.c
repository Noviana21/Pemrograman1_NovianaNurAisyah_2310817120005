#include <stdio.h>

void main() {
    int in, i;
    printf("Input \n");
    scanf("%d", &in);

    printf("\nOutput \n");
    for (i = 1; i <= in; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    for (i = in; i > 0; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}