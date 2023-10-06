#include <stdio.h>

int main() {
    int tamanho;

    while (scanf("%d", &tamanho) != EOF) {
        int matriz[tamanho][tamanho];

        // preencher zeros em toda a matriz
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                if (i == j)
                    matriz[i][j] = 2; // preenche 2 na diagonal principal
                else if (j == tamanho - i - 1)
                    matriz[i][j] = 3; // preenche 3 na diagonal secundária
                else
                    matriz[i][j] = 0; // preenche 0 nas demais posições
            }
        }

        // preencher 1 na parte interna, considerando que o '1' sempre começa na posição tamanho/3
        for (int i = tamanho/3; i < tamanho - tamanho/3; i++) {
            for (int j = tamanho/3; j < tamanho - tamanho/3; j++) {
                matriz[i][j] = 1;
            }
        }

        // preencher 4 no elemento central
        matriz[tamanho / 2][tamanho / 2] = 4;

        // saída
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++)
                printf("%d", matriz[i][j]);

            printf("\n");
        }
        printf("\n");
    }

    return 0;
}