
#include <stdio.h>

// Funcao que converte horas em 0:meses/1:semanas/2:min/3:seg/4:miliseg;
void conversao(int hrs){
	printf("Conversao: [Mes] [Semana] [Min] [Seg] [Miliseg]\n");

	// Variavel auxiliar e de interacao "vetor";
	int conv[5], i;
	conv[0] = hrs * 30;

	// Horas que um mês deve ter;
	if(conv[0] < 720){
		conv[0] = 0;
	}
	conv[1] = hrs * 7;

	// Horas que uma semana deve ter;
	if(conv[1] < 168){
		conv[1] = 0;
	}

	// Horas em min, seg e miliseg;
	conv[2] = hrs * 60;
	conv[3] = hrs * 36000;
	conv[4] = conv[3] * 100;

	// Imprime os valores;
	printf("Conversao:");
	for(i = 0; i < 5; i++){
		printf("[%d] ", conv[i]);
	}
}

// Funcao Principal;
int main(){
	// Variavel de entrada;
	int horas;

	printf("Digite a quantidade de horas: ");
	scanf("%d", &horas);

	// Chamando a funcao conversao;
	conversao(horas);
	return 0;
}
