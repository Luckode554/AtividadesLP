#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int a, b;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    int resultado = mdc(a, b);
    printf("MDC(%d, %d) = %d\n", a, b, resultado);

    return 0;
}