#include <stdio.h>

// Função para calcular o número de dígitos em um número inteiro
int contarDigitos(unsigned long long int numero) {
    int digitos = 0;
    while (numero != 0) {
        numero /= 10;
        digitos++;
    }
    return digitos;
}

int main(){
	
	int qnt_matrizes, tamanho, matrizN = 4, k, qtdDigitos;
	scanf("%d", &qnt_matrizes);
	while (qnt_matrizes--){ //executa um loop para cada matriz que deverá ser calculada, até chegar em zero
		
		scanf("%d", &tamanho);	
		unsigned long long int matriz[tamanho][tamanho];
		
		for (int linha = 0; linha < tamanho; linha++) {
	            for (int coluna = 0; coluna < tamanho; coluna++){
	            	scanf("%llu", &matriz[linha][coluna]); //preenche a matriz
					matriz[linha][coluna] *= matriz[linha][coluna]; //faz o quadrado dos valores
				}
		}
		
		printf("Quadrado da matriz #%d:\n", matrizN);
		for (int linha = 0; linha < tamanho; linha++) {
	        for (int coluna = 0; coluna < tamanho; coluna++){
	            unsigned long long int maior = 0;
					
				for (k = 0; k < tamanho; k++){ //acha o maior elemento da coluna
					if (matriz[k][coluna] > maior)
							maior = matriz[k][coluna];}
					
				int qtdDigitos = contarDigitos(maior);
				if (coluna != tamanho && coluna != 0)
					printf(" ");
						
				// flag '*' antes da diretiva de formatação nos dá um recuo dinâmico
				 printf("%*llu", qtdDigitos, matriz[linha][coluna]);
			}
					
			printf("\n");		
	
	    }
			matrizN++;
			// Quebra de linha condicional para não imprimir caso seja a última matriz;
			if (qnt_matrizes != 0)
				printf("\n");
		}

	return 0;
}

