/*
Implemente a função int meu_strindexof(char*, char) que retorna o índice da primeira ocorrência do caractere passado para a função na string passada para a função. Caso esse caractere não exista na string, a função deve retornar -1.
*/


#include <stdio.h>

int prim_ocorrencia(const char *palavra, char c){
    int indice = 0;
    while (*palavra != '\0'){
        if (*palavra == c)
            return indice;
        palavra ++;
        indice ++;
    
    }
    return -1;
}

int main(){
    int ocorrencia = prim_ocorrencia("abelha", 'l');
    printf("%d", ocorrencia);
    return 0;

}