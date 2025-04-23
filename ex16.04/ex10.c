#include <stdio.h>
int main(){
float sh, h;
printf("Digite seu salário por hora e quantas horas trabalhadas. \n");
printf("sálario por hora: ");
scanf("%f",&sh);
printf("horas trabalhadas: ");
scanf("%f",&h);
printf("seu salário total é de %.2f", sh*h);

}