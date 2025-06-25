#include <stdio.h>

int tipo_triangulo(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a)
        return 0;
    if (a == b && b == c)
        return 1;
    if (a == b || b == c || a == c)
        return 2;
    return 3;
}

int main() {
    int a, b, c;
    printf("Digite os três lados do triângulo: ");
    scanf("%d %d %d", &a, &b, &c);

    int resultado = tipo_triangulo(a, b, c);

    if (resultado == 0)
        printf("Não forma triângulo.\n");
    else if (resultado == 1)
        printf("Triângulo equilátero.\n");
    else if (resultado == 2)
        printf("Triângulo isósceles.\n");
    else
        printf("Triângulo escaleno.\n");

    return 0;
}