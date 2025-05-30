#include <stdio.h>

    int main(){
    int A[5],B[5],val,soma=0;
    
    for(int i=0;i<5;i++){
        printf("A[%d]: ",i);
        scanf("%d",&A[i]);
        printf("B[%d]: ",i);
        scanf("%d",&B[i]);
        val=A[i]*B[i];
        soma+=val;
    }    
    for(int i=0;i<5;i++){
        printf("\nA[%d]:%d\t",i,A[i]);
        printf("B[%d]:%d",i,B[i]);
    }
    
    printf("\nproduto escalar: %d",soma);
}
