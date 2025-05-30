#include <stdio.h>

int main(){
    int v[10], imp[10] = {0,0,0,0,0,0,0,0,0,0};
    for (int i = 0; i < 10; i++){
        int val;
        printf("Digite o %dº número [0,50]: ", i + 1);
        scanf("%d", &val);
        v[i] = val;
        if (val % 2 != 0){
            imp[i] = val;
        }
    }

    for (int i = 0; i < 10; i++){
        printf("V[%d] = %d \tI[%d] = %d\n", i, v[i], i, imp[i]);
    }
}