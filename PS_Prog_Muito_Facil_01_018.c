#include <stdio.h>
// Funcao que converte Radianos para Graus.
double conver_rad_em_graus(double angulo){
	//Variaveis de interacão;
	int X = 180;

	// Tipo double por ter uma precisão melhor.
	double pi = 3.141592653;

	// Convesao de radianos para grau
	double graus = (angulo * X) / pi;
	return graus;
}
// Funcao Principal
int main(){
	// Variavel de entrada;
	double rad;
	printf("Digite um angulo em rad: ");
	scanf("%lf", &rad);
	// Impressão da conversão
	printf("Angulo em graus = %.1lf", conver_rad_em_graus(rad));
	return 0;
}
