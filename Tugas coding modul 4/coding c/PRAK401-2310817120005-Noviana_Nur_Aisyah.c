#include <stdio.h>

int main(){
    int apasaja, i;
    char apahayo;

    printf("Input \n");
    scanf("%d %c", &apasaja, &apahayo);

    printf("\nOutput \n");
        for (int i = 1; i <= 50; i++) {
            if (i % apasaja == 0){
                printf("%c ", apahayo);
            } else{
            printf("%d ", i);
            }
        }

    return 0;
}