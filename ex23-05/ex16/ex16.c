#include <stdio.h>

int main(){
    float A[5]={0,1,2,3,4,};
    int n;

    printf("n: ");
    scanf("%d",&n);

    if(n==0){
        return 0;
    }
    if(n==1){
        printf("%f, %f, %f, %f, %f", A[0],A[1],A[2],A[3],A[4]);
    }
    else if(n==2) {
        printf("%f, %f, %f, %f, %f",A[4],A[3],A[2],A[1],A[0]);
    }
    else{
        printf("Código inválido");
    }

}