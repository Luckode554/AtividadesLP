#include <stdio.h>
#include <string.h>

int main() {
    char A[50], B[50], C[100];
    int i = 0, j = 0, k = 0;

    printf("Digite a primeira string (A): ");
    fgets(A, sizeof(A), stdin);
    A[strcspn(A, "\n")] = '\0';

    printf("Digite a segunda string (B): ");
    fgets(B, sizeof(B), stdin);
    B[strcspn(B, "\n")] = '\0';

    while (A[i] != '\0' || B[j] != '\0') {
        if (A[i] != '\0') {
            C[k++] = A[i++];
        }
        if (B[j] != '\0') {
            C[k++] = B[j++];
        }
    }
    C[k] = '\0';

    printf("String intercalada (C): %s\n", C);
    return 0;
}