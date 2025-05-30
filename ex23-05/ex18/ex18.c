#include <stdio.h>

#define M 10

    int main(){
    int A[M],n;

    printf("\nn: ");
    scanf("%d",&n);
    
    for(int i=1;i<M;i++){
        printf("A[%d]:\t",i);
        scanf("%d",&A[i]);
    
        printf("%d\n",A[i]*n);
    }
    }