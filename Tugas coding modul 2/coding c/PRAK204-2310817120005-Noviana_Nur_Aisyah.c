#include <stdio.h>
#include <math.h>

#define pi  3.142857

int main(){

    double a, b;

    printf("Input\n");
    scanf("%lf %lf", &a, &b);

    double volume = pi * pow(a, 2) * b;
    double luas = 2 * pi * a * (a + b);
    double keliling = 2 * pi * a;

    printf("\nOutput\n");
    printf("Volume = %.2lf\n", volume);
    printf("Luas = %.2lf\n", luas);
    printf("Keliling = %.2lf\n", keliling);

    return 0;
}