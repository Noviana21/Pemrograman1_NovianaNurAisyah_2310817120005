#include <stdio.h>

void main(){
    int x, y, i, j;

    printf("Input \n");
    scanf("%d %d", &x, &y);

    printf("\nOutput \n");
    if (x < y){
        for(i = x; i <= y; i++){
            j = y; 
            j -= (i - x);
            printf("%d %d", i, j);
            if (i == y){
                break;
            } else{
                printf(" - ");
            }
        } 
    }

    if (x > y){
        for(i = x; i >= y; i--){
            j = y; 
            j += (x - i);
            printf("%d %d", i, j);
            if (i == y){
                break;
            } else{
                printf(" - ");
            }
        } 
    }
}