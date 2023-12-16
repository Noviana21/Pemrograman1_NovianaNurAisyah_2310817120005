#include <stdio.h>

int main(){
    char nama[90], nim[90], paralel[90], ttl[90], alamat[90], hobi[90], no_hp[90];

    printf("Input\n");
    printf("Nama                 : ");
    gets(nama);

    printf("NIM                  : ");
    gets(nim);

    printf("Kelas Paralel        : ");
    gets(paralel);

    printf("Tempat/Tanggal Lahir : ");
    gets(ttl);

    printf("Alamat               : ");
    gets(alamat);

    printf("Hobby                : ");
    gets(hobi);

    printf("No. HP               : ");
    gets(no_hp);

    printf("\nOutput\n");
    printf("Nama                 : %s\n", nama);
    printf("NIM                  : %s\n", nim);
    printf("Kelas Paralel        : %s\n", paralel);
    printf("Tempat/Tanggal Lahir : %s\n", ttl);
    printf("Alamat               : %s\n", alamat);
    printf("Hobby                : %s\n", hobi);
    printf("No. HP               : %s\n", no_hp);

    return 0;
}