#include <stdio.h>

int main() {
    int pilihan;
    float angka1, angka2, hasil;

    while (1) {
        printf("Pilih program:\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &angka1);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &angka2);
            hasil = angka1 + angka2;
            printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", angka1, angka2, hasil);
        } else if (pilihan == 2) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &angka1);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &angka2);
            hasil = angka1 - angka2;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", angka1, angka2, hasil);
        } else if (pilihan == 3) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &angka1);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &angka2);
            hasil = angka1 * angka2;
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", angka1, angka2, hasil);
        } else if (pilihan == 4) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &angka1);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &angka2);
            hasil = angka1 / angka2;
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", angka1, angka2, hasil);
        } else if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator, Noviana Nur Aisyah");
            break;
        } else {
            printf("Input anda salah, silahkan coba lagi\n\n");
        }
    }

    return 0;
}