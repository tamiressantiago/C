/*
Escreva em C o que for pedido abaixo:

a) Crie uma estrutura que represente um Aluno que tenha um nome, matrícula, duas notas, sendo elas a nota da primeira unidade e a nota da segunda unidade, e uma nota referente à média dessas duas notas. Considere que i) nós poderemos, eventualmente, trocar a matrícula do aluno e ii) qualquer função que altere alguma nota do aluno deve recalcular e alterar a sua média quando a alteração de nota, de fato, acontecer.

b) Escreva uma função arredonda_nota, que altera as notas do aluno de modo que, caso a sua média seja 6.9 (ou 6.95), alguma nota deve ser alterada de modo que a sua média fique 7.0. Caso contrário, nenhuma mudança acontece.

*/

#include <stdio.h>

struct aluno
{
    char nome[10];
    int matricula;
    float n1;
    float n2;
    float media;
};

void arredonda_nota(struct aluno *a1Ptr) {
    if (a1Ptr->media >= 6.9 && a1Ptr->media < 7) {
        if (a1Ptr->n1 == 10)
            a1Ptr->n2 += 0.1;
        else
            a1Ptr->n1 += 0.1;
    }

    a1Ptr->media = (a1Ptr->n1 + a1Ptr->n2) / 2; 
}

int main() {
    struct aluno a1 = {"Fulano", 123, 7.0, 6.9, 6.95};
    struct aluno *a1Ptr = &a1;
    arredonda_nota(a1Ptr);
    printf("%.2f\n", a1.media);

    return 0;
}