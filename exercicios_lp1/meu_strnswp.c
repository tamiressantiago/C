/*
Implemente a função cuja assinatura é void meu_strnswp(char*, char*, int) que permuta um número de caracteres passado para a função entre as duas strings. Para fins de simplificação, assuma que essa troca sempre funcionará para os argumentos informados, ou seja, o número não excede o tamanho de nenhuma das strings.
*/

#include <stdio.h>

void meu_strnswp(char *nome1, char *nome2, int n){
    while (n > 0){
        char nome3 = *nome1;
        *nome1 = *nome2;
        *nome2 = nome3;
        nome1 ++;
        nome2 ++;
        n--;
    }
}

int main(){
    char nome1[10] = "Ana\n";
    char nome2[10] = "Maria\n";
    meu_strnswp(nome1, nome2, 3);
    printf("%s", nome1);
    printf("%s", nome2);
    return 0;
}