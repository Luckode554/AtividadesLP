#include <stdio.h>
#include <string.h>
#include <locale.h>

void substituir(char *A, char *B, char *C, char *resultado) {
    int i = 0, j = 0, k = 0;
    int tamB = strlen(B);

    while (A[i] != '\0') {
        if (strncmp(&A[i], B, tamB) == 0) {
            strcpy(&resultado[k], C);
            k += strlen(C);
            i += tamB;
        } else {
            resultado[k++] = A[i++];
        }
    }
    resultado[k] = '\0';
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    char A[200], B[50], C[50], resultado[300];

    printf("Digite a string A:\n");
    fgets(A, sizeof(A), stdin);
    A[strcspn(A, "\n")] = '\0';

    printf("Digite a string B (a ser substituída):\n");
    fgets(B, sizeof(B), stdin);
    B[strcspn(B, "\n")] = '\0';

    printf("Digite a string C (substituta):\n");
    fgets(C, sizeof(C), stdin);
    C[strcspn(C, "\n")] = '\0';

    substituir(A, B, C, resultado);

    printf("Resultado: %s\n", resultado);
    return 0;
}