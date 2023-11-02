#include <stdio.h>
#include <string.h> // memset
#include <stdlib.h> // qsort

// Função de comparação para qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {

    int cTeste, D, I, B; // D = dinheiro, I = num de ingredientes, B = qnt de bolos existentes

    // Exemplo de entrada:
    // cTeste=1, indica que terá apenas um caso de teste
    // D=10, quantidade de dinheiro, I = 2, existem 2 ingredientes, B = 2, existem 2 tipos de bolo
    // Essa linha contém o preço dos 2 (I=2) ingredientes
    // Essa linha descreve o bolo 1, o primeiro número indica que terá um par (índice do ingrediente, quantidade)
    // Essa linha descreve o bolo 2, o primeiro número indica que terá um par (índice do ingrediente, quantidade)

    scanf("%d", &cTeste);

    for (int i = 0; i < cTeste; i++) {
        scanf("%d %d %d", &D, &I, &B);
        int p[I]; // preço dos ingredientes
        int custo_do_bolo[B];
        memset(custo_do_bolo, 0, sizeof(custo_do_bolo)); // atribuindo zero ao custo

        for (int j = 0; j < I; j++) { // lendo o preço de cada ingrediente
            scanf("%d", &p[j]);
        }

        for (int j = 0; j < B; j++) { // descrição de cada bolo
            int Qi;
            scanf("%d", &Qi);

            for (int k = 0; k < Qi; k++) {
                int indice, quantidade;
                scanf("%d %d", &indice, &quantidade);
                custo_do_bolo[j] += p[indice] * quantidade;
            }
        }

        qsort(custo_do_bolo, B, sizeof(int), compare); // ordena o array custo_do_bolo para pegar o menor custo
        printf("%d\n", D / custo_do_bolo[0]);
    }

    return 0;
}