#include <stdio.h>
int main(){
int dia, mes, ano, idade;
printf("Escreva seu dia de nascimento: ");
scanf("%i",&dia);
printf("Escreva seu mes de nascimento: ");
scanf("%i",&mes);
printf("Escreva quantos anos voce tem: ");
scanf("%i",&ano);
idade = (ano*365)+(mes*30)+(dia);
printf("Sua idade em dias e: %.0i", idade);

}