#include <stdio.h>
int main(){
float cpm, nvt, nr, kmpl, cpr;
printf("Insira as segintes informações:\n");
printf("Comprimento total da pista em metros: ");
scanf("%f",&cpm);
printf("Número de voltas para completar a competição: ");
scanf("%f",&nvt);
printf("Número de reabastecimentos desejados: ");
scanf("%f",&nr);
printf("Quilometros rodados por litro: ");
scanf("%f",&kmpl);
cpr = (cpm/1000*nvt/kmpl/nr);
printf("A quantidade necessária de combústivel em litros para percorrer até o primeiro reabastecimento é de: %.2f",cpr);

}