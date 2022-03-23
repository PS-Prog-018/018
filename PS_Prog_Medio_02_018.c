#include <stdio.h>
#include <math.h>

//Funcao argumentos faz a selecao dos multipos de 3 e 5;
void argumentos(int num){

	// Caso seja multiplio de 3 e 5;
	if(num % 3 == 0 && num % 5 == 0){
		printf("CrossBots");
	}

	// Caso seja multiplio de 3;
	else if(num % 3 == 0){
		printf("Cross");
	}

	// Caso seja multiplio de 5;
	else if(num % 5 == 0){
		printf("Bots");
	}

	//Resto dos casos na qual não se classificam acima;
	else{
		printf("%d", num);
	}
}

// Funcao principal;
int main(){

	// Variavel de entrada;
	int numero;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	// Chamando a funcao argumentos;
	argumentos(numero);
	return 0;
}
