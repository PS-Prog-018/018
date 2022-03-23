#include <stdio.h>
#include <math.h>

// Funcao comprimento calcula a o comprimento do segmento de reta;
float comprimento(float x1, float y1, float x2, float y2){

	// Variaveis de interacao;
	float somax, somay, result;

	// Somas e raiz dos quadrados;
	somax = pow((x2 - x1), 2);
	somay = pow((y2 - y1), 2);

	// Raiz dos quadrados;
	result = sqrt((somax + somay));

	return result;
}

// Funcao Principal;
int main(){
	
	// Variaveis de entrada;
	float X1, X2, Y1, Y2;
	printf("Digite 2 pontos cartesianos, exemplo: 2.5,6.3\n");
	printf("\n\nDigite o ponto A: X e Y simultaneamente- ");
	scanf("%f,%f", &X1, &Y1);
	printf("\nDigite o ponto B: X e Y simultaneamente- ");
	scanf("%f,%f", &X2, &Y2);

	// Chamando funcao comprimento e imprimindo o resultado;
	printf("Comprimento: %.2f", comprimento(X1, Y1, X2, Y2));
	return 0;
}
