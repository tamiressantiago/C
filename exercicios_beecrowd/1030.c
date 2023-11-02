#include <stdio.h>

int eliminacoes(int qntPessoas, int salto);

int main() {
    int casos, qntPessoas, salto;
    scanf("%d", &casos);

    // Limita casos a um máximo de 30
    casos = (casos > 30) ? 30 : casos;

    int cont = 1;

    do {
        scanf("%d %d", &qntPessoas, &salto);
        printf("Case %d: %d\n", cont, eliminacoes(qntPessoas, salto));
        cont++;
    } while (--casos > 0);  // Decrementa e verifica o número de casos

    return 0;
}

/* A fórmula utilizada para calcular o índice de Josephus, f(n, k), é a seguinte:
   f(n,k) = (k − 1 + f(n−1,k)) % n + 1 */

int eliminacoes(int qntPessoas, int salto) {
    if (qntPessoas == 1) {
        return 1;
    }
    return (salto - 1 + eliminacoes(qntPessoas - 1, salto)) % qntPessoas + 1;
}