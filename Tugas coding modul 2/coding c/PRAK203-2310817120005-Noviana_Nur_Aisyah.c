#include <stdio.h>

void main(){
    float a, b, i, j, x, y, hasil;

    // 20 3 4 12 5 9 | 12 2 10 4 3 14

    printf("Input\n");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    hasil = (float) (a - b) * i / j - (x + y);

    printf("\nOutput\n");
    printf("Hasil = %.3f", hasil);
}