#include <stdio.h>

int main() {
float n1, n2, n3;
printf("Escreva o valor de cada nota. \n");
printf("Nota 1: ");
scanf("%f",&n1);
printf("Nota 2: ");
scanf("%f",&n2);
printf("Nota 3: ");
scanf("%f",&n3);
printf("A nota final do aluno é de: %.2f", (n1*2+n2*3+n3*5)/10);
}