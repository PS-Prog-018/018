#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funcao que calcula valor aproximado de Pi
float pi_aproximado(){

	// Variaveis de interacao;
	int i = 0;
	float pi = 3.14159265, aleatorio = 0, aproximado = 0;

	// srand a cada vez que o programade rode retorne valores aleatorios
	srand( (unsigned)time(NULL) );

	// While roda até que chege a um valor de pi aproximado;
	while(i < 1){
		// Gera os valores aleatorios de 0-1
		aleatorio = rand() % 101;
		aleatorio = aleatorio / 10000000;

		// Caso o valor seja igual ou proximo de PI
		if(aproximado <= pi){
			aproximado = aproximado + aleatorio;
		}

		// Caso o valor seja maior que Pi quebra o while;
		else if(aproximado > pi){
			i = 1;
		}
	}
	return aproximado;
}

// Funcao Principal
int main(){
	// Resultado amostral do valor de Pi usado com o valor aproximado;
	printf("Valor de PI usado = 3.14159265");
	printf("\nResultado calculado Aproximado de PI: %.8f...\n", pi_aproximado());
	return 0;
}
