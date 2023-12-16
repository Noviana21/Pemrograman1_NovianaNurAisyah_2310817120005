#include <stdio.h>
int reverse(int x){
    int rev = 0;

    while (x != 0) {
        rev = rev * 10 + x % 10;    //rumus untuk reverse
        x /= 10;
    }
    
return rev;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d",reverse(C));
}