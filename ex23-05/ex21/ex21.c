#include <stdio.h>

    int main(){
    int A[10],B[10],C[10];

    for(int i=0;i<10;i++){
        printf("A: ");
        scanf("%d",&A[i]);
        printf("B: ");
        scanf("%d",&B[i]);
    }
    for(int i=0;i<10;i++){
    C[i]=A[i]-B[i];
    printf("C[%d]:%d\t",i,C[i]);
    }
}