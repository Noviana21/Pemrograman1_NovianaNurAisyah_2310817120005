#include <stdio.h>

int maksimal(int a, int b){
    int x = a;
    if (b > a){
        x = b;
    }

    return x;
}

int minimal(int a, int b){
    int y = a;
    if (b < a){
        y = b;
    }

    return y;
}

int main(){
    int batas = 0;
    int maks = -100000; // hanya sebagai inisiasi
    int minim = 100000; // hanya sebagai inisiasi
    int bilangan;

    scanf("%d", &bilangan);
    while(batas < bilangan){
        int nilai;
        scanf("%d", &nilai);
        maks = maksimal(maks, nilai);
        minim = minimal(minim, nilai);
        batas++;
    }
    
    printf("%d %d", maks, minim);
}