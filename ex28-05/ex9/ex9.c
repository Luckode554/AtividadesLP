#include <stdio.h>

int main() {
    int matriz[3][3], soma = 0;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    for(int i = 1; i < 3; i++)
        for(int j = 0; j < i; j++)
            soma += matriz[i][j];
    printf("%d\n", soma);
}