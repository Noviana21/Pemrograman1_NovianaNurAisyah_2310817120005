#include <stdio.h>

void Biodata(int a, char b[], char c[]){
    int tahun_sekarang = 2023;
    int sekarang = 2023 - a;

    printf("\nOutput \n");
    printf("Perkenalkan Nama Saya: %s\n", b);
    printf("Umur Saya: %d\n", sekarang);
    printf("Saya Adalah Angkatan: %d\n", tahun_sekarang);
    printf("Asal Saya dari: %s\n", c);
}
int main() {
    int tahunLahir;
    char Namaku[20], Asal[15];
    scanf(" %d", &tahunLahir);   
    scanf(" %[^\n]%*c", &Namaku);
    scanf(" %[^\n]%*c", &Asal);
    Biodata(tahunLahir, Namaku, Asal);

    return 0;
}