#include <stdio.h>
int main(){
float sa, r;
printf("Digite seu salário atual: ");
scanf("%f",&sa);
printf("Digite o percentual do reajuste: ");
scanf("%f",&r);
printf("Seu salário novo será %.2f", sa+(sa*r));

}