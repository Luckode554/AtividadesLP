#include <stdio.h>
int main(){
int vt, vv, vb, vn;
printf("Insira o numero de votos totais, votos validos, votos brancos e votos nulos. \n");
printf("votos totais: ");
scanf("%i",&vt);
printf("votos validos: ");
scanf("%i",&vv);
printf("votos brancos: ");
scanf("%i",&vb);
printf("votos nulos: ");
scanf("%i",&vn);
printf("O percentual de votos validos é %.2i. O percentual de votos bancos é de %.2i. O percentual de voos nulos é de %.2i",vv*100/vt, vb*100/vt, vn*100/vt); 

}