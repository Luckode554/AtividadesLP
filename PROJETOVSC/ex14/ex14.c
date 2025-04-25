#include <stdio.h>

int main() {
float ncar, vpcar, sf, vtcar;
printf("Digite o número de carros vendidos: ");
scanf("%f",&ncar);
printf("Digite o valor total das vendas: ");
scanf("%f",&vtcar);
printf("Digite o valor ganho por carro vendido: ");
scanf("%f",&vpcar);
printf("Digite o valor do salário fixo: ");
scanf("%f",&sf);
printf("O salário total recebido pelo funcionário será de: %.2f",sf+ncar*vpcar+vtcar*5/100);
}