#include <stdio.h>

int main (){
    int n;
    float A[5]={0,1,2,3,4};

    printf("n: ");
    scanf("%d",&n);

    if (n==0){
        return 0;
    }
    else if(n==1){
        for(int i=0;i<5;i++){
            printf("\t%.0f", A[i]);
        }
    
    }
    else if (n==2){
        for(int i=4;i>=0;i--){
            printf("\t%.0f", A[i]);
        }
    }
    else{
        printf("Código inválido");
    }
}