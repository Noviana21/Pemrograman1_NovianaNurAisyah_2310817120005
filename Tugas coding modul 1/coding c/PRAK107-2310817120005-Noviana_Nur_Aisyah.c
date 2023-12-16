#include <stdio.h>

void main(){
    int a, b, c, k, h, t;
    a = 4;
    b = 5;
    c = 7;
    k = 16;
    h = 85000;
    t = (int) k * h;

    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d \n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d \n", k);
    printf("Harga tanah Per Meter adalah %d \n", h);
    printf("Jawaban : \nBiaya yang diperlukan Pak Dengklek adalah : Rp %d", t);
}