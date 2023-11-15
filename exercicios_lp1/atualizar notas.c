/*
Escreva em C o que for pedido abaixo:

a) Crie uma estrutura que represente um Aluno que tenha um nome (char *), duas notas, sendo elas a nota da primeira unidade e a nota da segunda unidade, e uma nota referente à média dessas duas notas.

b) Escreva uma função lanca_nota, que altera as notas do aluno da seguinte maneira:

* o usuário passa 1 para a função se quiser alterar a 1ª nota e 2 se quiser a 2ª
* caso o usuário passe algum outro valor, nada irá acontecer
* o usuário passa também a nota que deseja atribuir
* a nota correspondente é atualizada e a média é recalculada automaticamente
*/

#include <stdio.h>

struct aluno {
    char nome[100];
    float nota_1;
    float nota_2;
    float media;
};

void lanca_nota(struct aluno *a1Ptr, int unidade, float nota) {
    if (unidade == 1)
        a1Ptr->nota_1 = nota;
    else if (unidade == 2)
        a1Ptr->nota_2 = nota;

    // Atualizar a média após lançar a nota
    a1Ptr->media = (a1Ptr->nota_1 + a1Ptr->nota_2) / 2.0;
}

int main() {
    struct aluno a1 = {"Fulano", 0, 0, 0};
    struct aluno *a1Ptr = &a1;
    int n;
    float nota;
    printf("Qual nota deseja alterar?\nDigite [1] para a primeira nota e [2] para a segunda nota: ");
    scanf("%d", &n);
    printf("\nQual nota deseja atribuir?: ");
    scanf("%f", &nota);
    lanca_nota(a1Ptr, n, nota);
    printf("A nova média é %.2f\n", a1.media);

    return 0;
}