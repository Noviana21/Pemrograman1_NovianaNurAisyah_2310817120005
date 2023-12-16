#include <stdio.h>

void main(){
    int x, y, i, j, kali, sum, sum2;
    sum = 0, sum2 = 0;

    printf("Input \n");
    scanf("%d %d", &x, &y);

    printf("\nOutput \n");
    for (i = 1; i <= x; i++) {
        kali = i * y;
        sum += kali;
        if (i == 1) {
            printf("(%d * %d) = %d \n", i, y, kali);
        } else {
            for (j = i; j >= 1; j--) {
                printf("(%d * %d)", j, y);
                if (j > 1) {
                    printf(" + ");
                }
            }
            printf(" = %d \n", sum);
        }
        sum2 += sum;
    }
    printf("%d", sum2);
}