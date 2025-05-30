#include <stdio.h>

    int main() {
    int A[10];
    for (int i = 0; i < 10; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 10; i++) {
        int a = A[i];
        int cont = 0;
        if (a >= 2) {
            for (int j = 1; j <= a; j++) {
                if (a % j == 0) {
                    cont++;
                }
            }
        }
        if (cont == 2) {
            printf("\n%d é primo e está na posição %d", a, i);
        }
    }
}