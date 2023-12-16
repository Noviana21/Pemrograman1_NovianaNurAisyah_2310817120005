#include <stdio.h>

void main(){
    int b;

    printf("Input\n");
    scanf("%d", &b);

    if (b == 0){
        printf("\nOutput \nNol");
    } else if (b > 0 && b < 10){
        printf("\nOutput \nSatuan");
    } else if (b >= 10 && b < 20){
        printf("Output \nBelasan");
    } else if (b >= 20 && b < 100){
        printf("\nOutput \nPuluhan");
    } else {
        printf("\nOutput \nAnda Menginput Melebihi Limit Bilangan");
    }
}

// 3 | 0 | 100 | 62 | 13