#include <stdio.h>
#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct{
    char nome[50];
    int ra;
    float nota;
    int freq;
} Aluno;

Aluno alunos[MAX];
int total = 0;

void inserir(){
    if (total >= MAX) return;
    scanf(" %s[^\n]", alunos[total].nome);
    scanf("%d", &alunos[total].ra);
    scanf("%f", &alunos[total].nota);
    scanf("%d", &alunos[total].freq);
    total++;
}

void visualizar(){
    for (int i = 0; i < total; i++) {
        printf("%s %d %.2f %d\n", alunos[i].nome, alunos[i].ra, alunos[i].nota, alunos[i].freq);
    }
}

void buscar(){
    int ra;
    scanf("%d", &ra);
    for (int i = 0; i < total; i++) {
        if (alunos[i].ra == ra) {
            printf("%s %d %.2f %d\n", alunos[i].nome, alunos[i].ra, alunos[i].nota, alunos[i].freq);
            return;
        }
    }
}

void remover(){
    int ra;
    scanf("%d", &ra);
    for (int i = 0; i < total; i++) {
        if (alunos[i].ra == ra) {
            for (int j = i; j < total - 1; j++) {
                alunos[j] = alunos[j + 1];
            }
            total--;
            return;
        }
    }
}

int main(){
    int op;
    do {
        scanf("%d", &op);
        switch (op) {
            case 1: inserir(); break;
            case 2: remover(); break;
            case 3: visualizar(); break;
            case 4: buscar(); break;
        }
    } while (op != 0);
    return 0;
}