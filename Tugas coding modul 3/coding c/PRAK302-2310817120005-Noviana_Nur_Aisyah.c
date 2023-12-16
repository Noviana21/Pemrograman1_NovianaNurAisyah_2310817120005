#include <stdio.h>

int main(){
    int nilai;

    printf("Input\n");
    scanf("%d", &nilai);

    switch(nilai){
        case 80 ... 100:
            printf("\nOutput \nA");
        break;
        case 70 ... 79:
            printf("\nOutput \nB");
        break;
        case 60 ... 69:
            printf("\nOutput \nC");
        break;
        case 50 ... 59:
            printf("\nOutput \nD");
        break;
        default:
            printf("\nOutput \nE");
    }

    return 0;
}

// 50 D | 75 B | 68 C | 98 A | 49 E