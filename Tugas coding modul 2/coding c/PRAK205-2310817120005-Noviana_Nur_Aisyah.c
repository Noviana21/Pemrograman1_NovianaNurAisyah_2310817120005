#include <stdio.h>
#include <math.h>

void main(){
    float A, B;

    printf("Input\n");
    scanf("%f %f", &A, &B);

    float C = sqrt(B*B - A*A);
    float tinggi = A;
    float alas = C;
    float keliling = A + B + C;
    float luas = A * C / 2;

    printf("\nOutput\n");
    printf("Alas = %.0f cm\n", C);
    printf("Tinggi = %.0f cm\n", A);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);
}