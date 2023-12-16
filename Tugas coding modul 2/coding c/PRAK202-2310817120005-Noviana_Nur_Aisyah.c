#include <stdio.h>

void main(){

    printf("Input\n");

    float first, second, sum;

    // 14, 20.5 | 0.45, 99.5

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &first);

    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &second);

    sum = first + second;
    
    printf("\nOutput\n");
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"", first, second, sum);
}