#include <stdio.h>

void main(){
    int detik, hari, jam, menit, detik_lagi;

    printf("Input\n");
    scanf("%d", &detik);

    hari = detik / (24 * 3600);
    jam = (detik % (24 * 3600)) / 3600;
    menit = (detik % 3600) / 60;
    detik_lagi = detik % 60;

    if (hari > 0) {
        printf("\nOutput \n%d hari %02d:%02d:%02d", hari, jam, menit, detik_lagi);
    } else{
        printf("\nOutput \n%02d:%02d:%02d", jam, menit, detik_lagi);
    }
}

// 3600  | 1432 | 8453 | 21542 | 125478 