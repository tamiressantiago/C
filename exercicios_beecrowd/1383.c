#include <stdio.h>

int elementosDiferentesColuna(int matriz[9][9]) {
  	int check = 1;
  	for(int i = 0; i < 9; i++){
    	for(int j = 0; j<9; j++){
      		for(int k = i+1; k <=8; k++){
      	 		if(matriz[i][j] == matriz[k][j])
				   check = 0;
      }
    }
  }
  return check;
}

int elementosDiferentesLinha(int matriz[9][9]) {
  int check = 1;
  for(int i = 0; i < 9; i++){
    for(int j = 0; j<9; j++){
      for(int k = j+1; k <=8; k++){
       if(matriz[i][j] == matriz[i][k])
	   		check = 0; 
      }
    }
  }
  return check;
}

int elementosDiferentesSubmatriz(int matriz[3][3]) {
    int check = 1;
    int array[9] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int k = matriz[i][j];
            if (array[k - 1] == 1) {
                check = 0;
            } else {
                array[k - 1] = 1;
            }
        }
    }
    return check;
}

int main(){
	
	int nMatrizes, contador = 1;
	int sudoku[9][9];
	scanf("%d", &nMatrizes);
	
	while (nMatrizes--){
		int count = 0;
		int soma1 = 0, soma2 = 0;
		for (int linha = 0; linha < 9; linha++) {
		    for (int coluna = 0; coluna < 9; coluna++)
		        scanf("%d", &sudoku[linha][coluna]); //preenche a matriz
		}
		for (int i = 0; i < 9; i += 3) {
      		for (int j = 0; j < 9; j += 3) {
        		int region[3][3];
        		int k = i;
        		while (k < i + 3) {
	          		int l = j;
	          		while (l < j + 3) {
		            	region[k % 3][l % 3] = sudoku[k][l];
		            	l++;
	          		}
	          		k++;
        		}
        	if (elementosDiferentesSubmatriz(region)) {
          	count++;
        }
      }
    }
		if (count == 9 && elementosDiferentesLinha(sudoku) && elementosDiferentesColuna(sudoku))
			printf("Instancia %d\nSIM\n", contador);
		else
			printf("Instancia %d\nNAO\n", contador);
		
		printf("\n");
		contador++;
	}
		
	return 0;
}