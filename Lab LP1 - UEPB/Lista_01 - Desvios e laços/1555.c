#include <stdio.h>
#include <math.h>

int main() {
    int qnt_casos;
    scanf("%d\n", &qnt_casos); //determina a quantidade de casos de teste

    for (int i = 0; i < qnt_casos; i++) {
        int x, y;
        scanf("%d %d", &x,
              &y); // dois inteiros x e y (1 ≤ x, y ≤ 100), indicando as variáveis a serem inseridas na função.
        int rafael = pow((3 * x), 2) + pow(y, 2);
        int beto = 2 * pow(x, 2) + pow((5 * y), 2);
        int carlos = -100 * x + pow(y, 3);

        if (rafael > beto && rafael > carlos)
            printf("Rafael ganhou\n");
        else if (beto > rafael && beto > carlos)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
    }

    return 0;
}
