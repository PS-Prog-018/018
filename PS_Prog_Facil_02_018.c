#include <stdio.h>
#include <stdlib.h>

//Funcao conta_uns, conta a quantidades de "1" em binario;
int conta_uns(int numero_dado){
	// Variaveis de controle e interacao com a funcao;
	int i, resto, cont_um = 0;

	//Converte o numero e em seguida conta a quantidades de numeros 1;
	for(i = 0; numero_dado > 0; i++){
		resto = (numero_dado % 2);
		numero_dado = numero_dado / 2;
		// Conta a quantidade de numeros 1 em binario;
		if(resto == 1){
			cont_um++;
		}
	}
	return cont_um;
}

// Funcao Principal
int main(){
	// variavel de entrada;
	int numero;
	printf("Digite o numero: ");
	scanf("%d", &numero);
	printf("\nQuantidades de numeros 1 em binario: %d \n", conta_uns(numero));
	return 0;
}
