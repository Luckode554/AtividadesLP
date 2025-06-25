#include <stdio.h>

int soma_ate_x(int x) {
    int soma = 0;
    for (int i = 1; i <= x; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero > 0) {
        int resultado = soma_ate_x(numero);
        printf("Soma de 1 até %d = %d\n", numero, resultado);
    } else {
        printf("Número inválido!\n");
    }

    return 0;
}