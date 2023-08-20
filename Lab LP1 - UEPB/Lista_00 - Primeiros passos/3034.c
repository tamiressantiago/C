#include <stdio.h>

int verificar_primo(int num){
    for(int i = 2; i < num; i++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int consultas;
    scanf("%d\n", &consultas);

    for(int i = 0; i < consultas; i++){
        int caso;
        scanf("%d", &caso);
        caso += 1;
          
        if (caso % 7 == 0 && caso % 2 != 0 && (verificar_primo(caso+2))) {
          printf("Yes\n");
        } else {
          printf("No\n");
          }
    
    }
  return 0;
}