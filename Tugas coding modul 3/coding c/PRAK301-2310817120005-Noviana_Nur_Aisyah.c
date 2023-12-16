#include <stdio.h>

void main(){
    int x, y;

    printf("Input\n");
    scanf("%d %d", &x, &y);

    if (x > y){
        printf("\nOutput \n%d %d", y, x);
    } else {
        printf("\nOutput \n%d %d", x, y);
    }
}

// 36 12
// 5 6
// 94 65