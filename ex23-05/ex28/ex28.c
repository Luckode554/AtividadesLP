#include <stdio.h>

    int main() {
    int v[10], v1[10], v2[10];
    int i1 = 0, i2 = 0;

    for (int i = 0; i < 10; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
        if (v[i] % 2 != 0) {
            v1[i1] = v[i];
            i1++;
        }
        else {
            v2[i2] = v[i];
            i2++;
        }
    }
    printf("\nElementos ímpares (v1):\n");
    for (int i = 0; i < i1; i++) {
        printf("%d ", v1[i]);
    }
    for (int i = 0; i < i2; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");
}