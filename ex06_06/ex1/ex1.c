#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char texto[100];
    printf("Digite uma frase:\n");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    int i = 0;
    int novaPalavra = 1;

    while (texto[i] != '\0') {
        if (texto[i] == ' ' || texto[i] == '.' || texto[i] == ',' || texto[i] == ';') {
            novaPalavra = 1;
        } else if (novaPalavra && texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] -= 32;
            novaPalavra = 0;
        } else {
            novaPalavra = 0;
        }
        i++;
    }

    printf("Resultado: %s\n", texto);
    return 0;
}