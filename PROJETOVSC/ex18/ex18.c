#include <stdio.h>

int main() {
float pl, l, c;
printf("Digite a potência em watts da lâmpada utilizada: ");
scanf("%f",&pl);
printf("Digite o comprimento em metros do cômodo: ");
scanf("%f",&c);
printf("Digite a largura em metros do cômodo: ");
scanf("%f",&l);
printf("O número de lâmpadas necessárias é de %.2f",(l*c*18)/pl);
}