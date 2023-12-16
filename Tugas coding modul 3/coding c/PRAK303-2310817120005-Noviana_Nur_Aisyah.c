#include <stdio.h>

void main(){
    int N;

    printf("Input\n");
    scanf("%d", &N);

    if (N > 0){
        printf("\nOutput \npositif");
    } 
    else if (N < 0){
        printf("\nOutput \nnegatif");
    } 
    else {
        printf("\nOutput \nnol");
    }
}

// 50 | -3000 | 0