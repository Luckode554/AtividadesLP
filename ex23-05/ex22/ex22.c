#include <stdio.h>

    int main(){
    int A[10],B[10],C[10];
    
    for(int i=0;i<10;i++){
        printf("A[%d]: ",i);
        scanf("%d",&A[i]);
        printf("B[%d]: ",i);
        scanf("%d",&B[i]);
    
        for(int j=0;j<10;j++){
            if(j%2==0){
                C[j]=A[i];
            }
            else{
                C[j]=B[i];
            }
            printf("\tC[%d]:%d",j,C[j]);
        }
    }
}
