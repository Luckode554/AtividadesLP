#include <stdio.h>

int main() {
float f;
printf("Digite a temperatura em fahrenheit: ");
scanf("%f",&f);
printf("A temperatura em celsius é de: %.2f", (5*f-5*32)/9);
}