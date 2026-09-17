//4:-) Tendo como dados de entrada a altura e o sexo de uma pessoa, 
//construa um programa para calcular e exibir o peso ideal, utilizando as seguintes fórmulas: 
//para homens: (72.7 * altura) - 58; 
//para mulheres: (62.1 * altura) - 44.7.

#include<stdio.h>

int main(){
	int sexo;
	float altura, pesoIdeal = 0;
	
	printf("----- Peso ideal -----\n");
	printf("Qual o sexo do paciente, selecine 1 para homem e 0 para mulher: ");
	scanf("%d", &sexo);
	printf("Qual a altura do paciente: ");
	scanf("%f", &altura);
	
	if(sexo == 1){
		pesoIdeal = (72.7 * altura) - 58;
		printf("O peso ideal para este paciente e: %.2f", pesoIdeal);
	}
	else{
		pesoIdeal = (62.1 * altura) - 44.7;
		printf("O peso ideal para este paciente e: %.2f", pesoIdeal);
	}
	
}

