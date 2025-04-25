#include <stdio.h>
int main(){
float kmi, kmf, cg, vr;
printf("Insira as seguintes informações:\n");
printf("Km inicial: ");
scanf("%f",&kmi);
printf("Km final: ");
scanf("%f",&kmf);
printf("Combustivel gasto em litros: ");
scanf("%f",&cg);
printf("Valor recebido pelas viajens: ");
scanf("%f",&vr);
printf("O consumo médio de combustivel é de: %.2f.\nJá o lucro líquido é de %.2f",(kmf-kmi)/cg,vr-((kmf-kmi)/cg*2.90) );

}