#include <stdio.h>

void main(){
    float yz = 958.730;
    int da, apahayo;
    da = 5;
    apahayo = (int) (yz * 1000) / da;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %.3f \n", yz);
    printf("Jumlah pahlawan = %d \n", da);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", apahayo);
}