#include <stdio.h>

void main(){
    int a, b, c, d;
    a = 400000;
    b = 350000;
    c = (int)a - 0.13 * a;
    d = (int)b - 0.21 * b;

    printf("Harga sepatu A adalah %d \n", a);
    printf("Harga sepatu B adalah %d \n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d \n", c);
    printf("Sepatu A mendapat diskon 21%% sehingga harganya menjadi %d", d);
}