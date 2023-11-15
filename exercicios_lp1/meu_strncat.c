/*
Implemente a função cuja assinatura é void meu_strncat(char*, const char*, int) que concatena os primeiros n caracteres, baseado no número passado para a função, da segunda string passada para a primeira. Para fins de simplificação, assuma que a concatenação sempre funcionará para os argumentos informados, ou seja, a primeira string comportará os caracteres a mais da segunda e o número não será maior que o tamanho da segunda string.

*/

#include <stdio.h>

void meu_strncat(char* palavra1, const char *palavra2, int n){
    int cont = 0;
    while (*palavra1 != '\0')
        palavra1++;
    while (cont < n ){
        *palavra1 = *palavra2;
        cont ++;
        palavra1++;
        palavra2++;
    }
      *palavra1 = '\0';
}

int main(){
    char nome1[10] = "Ana";
    char nome2[10] = "Maria";
    meu_strncat(nome1, nome2, 2);
    printf("%s\n", nome1); // imprimirá “AnaMa”

    return 0;
}