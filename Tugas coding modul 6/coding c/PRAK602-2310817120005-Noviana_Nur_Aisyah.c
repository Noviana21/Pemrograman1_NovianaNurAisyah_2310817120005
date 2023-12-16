#include <stdio.h>

void zetsu_putih(int jumlah, int zetsu[jumlah]) {
    for (int i = 0; i < jumlah; i++) {
        printf("%d ", zetsu[i] * (i + 1));
    }
}

int main() {
    int bebas;

    scanf("%d", &bebas);

    int zetsu[bebas];
    for (int i = 0; i < bebas; i++) {
        scanf("%d", &zetsu[i]);
    }

    printf("\n");
    zetsu_putih(bebas, zetsu);

    return 0;
}