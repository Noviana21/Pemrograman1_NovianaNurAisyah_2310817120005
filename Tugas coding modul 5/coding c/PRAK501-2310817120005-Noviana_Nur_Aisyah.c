#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d) {
    int hasil;

    if (a > b && a > c && a > d) {
        hasil = a;
    } else if (b > a && b > c && b > d) {
        hasil = b;
    } else if (c > a && c > b && c > d) {
        hasil = c;
    } else if (d > a && d > b && d > c) {
        hasil = d;
    }
    
    return hasil;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);

    return 0;
}