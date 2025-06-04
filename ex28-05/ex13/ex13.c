#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4], triangular[4][4];
    srand(time(NULL));
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 20 + 1;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(j > i)
                triangular[i][j] = 0;
            else
                triangular[i][j] = matriz[i][j];
            printf("%2d ", triangular[i][j]);
        }
        printf("\n");
    }
}