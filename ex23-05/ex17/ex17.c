#include <stdio.h>

    int main(){
    int A[10];
    
    for(int i=0;i<10;i++){
        printf("\nA[%d]:",i);
        scanf("%d",&A[i]);
        if (A[i]<0){
            A[i]=0;
        }
        printf("%d\t",A[i]);
    }
}