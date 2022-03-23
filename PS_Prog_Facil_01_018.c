#include <stdio.h>

// Funcao imprime o numero de repeticoes;
void repetir(char item[50], int n){

	// Variavel de Controle;
	int i;
	printf("Repeticoes: ");

	// Impressao das repeticoes;
	printf("[");
	for(i = 0; i < n; i++){
		printf("\"%s\"", item);
		if(i < n - 1){
			printf(",");
		}
	}
	printf("]");
}

// Funcao Principal;
int main(){

	// Variaveis de entrada;
	char palavra[50];
	int repeticoes;
	printf("Digite um item para repetir: ");
	gets(palavra);
	printf("Digite a quantidade de repeticoes: ");
	scanf("%d", &repeticoes);

	// Chamando a funcao repetir;
	repetir(palavra, repeticoes);
	return 0;
}
