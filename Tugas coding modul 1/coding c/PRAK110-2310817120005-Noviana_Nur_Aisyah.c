#include <stdio.h>
#include <math.h>

void main(){
    int A, B, C, pythagoras, keliling, luas;
    A = 12;
    C = 5;
    pythagoras = pow(A, 2) + pow(C, 2);
    B = sqrt(pythagoras);
    keliling = (int) (A + B + C);
    luas = (int) (0.5 * C * A);

    printf("Diketahui : \nAlas = %d cm \nTinggi = %d cm \n\n", C, A);
    printf("Jawab : \nSisi A = %d cm \nSisi B = %d cm \nSisi C = %d cm \n", A, B, C);
    printf("Keliling = %d cm \nLuas = %d cm kuadrat", keliling, luas);
}