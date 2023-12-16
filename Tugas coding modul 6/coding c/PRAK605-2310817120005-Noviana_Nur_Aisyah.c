#include <stdio.h>

void matriks1(int b, int A[b][b], int B[b][b], int m[b][b]) {
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= b; j++) {
            m[i][j] = 0;

            for (int k = 1; k <= b; k++) {
                m[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void matriks2(int b, int matrix[b][b]) {
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= b; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int b;

    scanf("%d", &b);

    int A[b][b], B[b][b], m[b][b];

    printf("Matriks A \n");
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= b; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matriks B \n");
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= b; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    matriks1(b, A, B, m);

    printf("Matriks AXB \n");
    matriks2(b, m);

    return 0;
}