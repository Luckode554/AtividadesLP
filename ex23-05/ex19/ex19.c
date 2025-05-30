#include <stdio.h>

#define M 50

    int main(){
    int A[M];

    for(int i=0;i<M;i++){
        A[i]= (i+5*i)%(i+1);
        printf("\nA[%d]:%d",i,A[i]);
    }
    }