#include <stdio.h>

int main() {
    int v[6];
    int soma_pares = 0;
    int qtd_impares = 0;

    for (int i = 0; i < 6; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    printf("\nN:\n");
    for (int i = 0; i < 6; i++) {
        if (v[i] % 2 == 0) {
            printf("%d ", v[i]);
            soma_pares += v[i];
        }
    }
    printf("\n\nNúmeros ímpares digitados:\n");
    for (int i = 0; i < 6; i++) {
        if (v[i] % 2 != 0) {
            printf("%d ", v[i]);
            qtd_impares++;
        }
    }
    printf("\n\nSoma dos números pares: %d", soma_pares);
    printf("\nQuantidade de números ímpares: %d\n", qtd_impares);
}