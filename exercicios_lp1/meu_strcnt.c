/*
Implemente a função int meu_strcnt(const char*, char) que conta o número de ocorrências do caractere passado na string
*/

#include <stdio.h>

int meu_strcnt(const char* palavra, char c){
    int qnt = 0;
    while (*palavra != '\0'){
        if (*palavra == c)
            qnt ++;
        palavra++;
    }
    return qnt;
}

int main(){
    int quantidade;
    quantidade = meu_strcnt("abelha", 'a');
    printf("%d", quantidade);
    return 0;
}