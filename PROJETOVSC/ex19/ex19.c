#include <stdio.h>
int main(){
float l, c, h;
int nc;
printf("Insira a largura em metros da cozinha: ");
scanf("%f",&l);
printf("Insira o comprimento em metros da cozinha: ");
scanf("%f", &c);
printf("Insira a altura em metros da cozinha: ");
scanf("%f",&h);
nc = 2*h*(l+c);
printf("Sera necessário %.0i\n",nc);
}