#include <stdio.h>

int eh_letra(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

char para_minuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int eh_vogal(char c) {
    c = para_minuscula(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int eh_consoante(char c) {
    return eh_letra(c) && !eh_vogal(c);
}

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("É letra? %d\n", eh_letra(caractere));
    printf("É vogal? %d\n", eh_vogal(caractere));
    printf("É consoante? %d\n", eh_consoante(caractere));

    return 0;
}