#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} data;

int dias(data d){
    return d.ano * 365 + d.mes * 30 + d.dia;
}

int main(){
    data d1, d2;
    int t1, t2, diferenca;

    printf("Digite a primeira data (dd mm aaaa): ");
    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);

    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

    t1 = dias(d1);
    t2 = dias(d2);

    diferenca = t1 - t2;
    if(diferenca < 0)
        diferenca = -diferenca;

    printf("diferença aproximada em dias: %d\n", diferenca);
    return 0;
}