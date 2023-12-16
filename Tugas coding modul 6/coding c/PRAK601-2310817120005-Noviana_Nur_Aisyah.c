#include <stdio.h>

void matriks(int baris, int kolom, int m[baris][kolom]) {
    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= kolom; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int baris, kolom;

    scanf("%d %d", &baris, &kolom); //baris dan kolom

    int m[baris][kolom];
    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= kolom; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    printf("\n");
    matriks(baris, kolom, m);

    return 0;
}