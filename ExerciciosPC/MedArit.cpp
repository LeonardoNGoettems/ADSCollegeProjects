//1:-) Faça um algoritmo que receba duas notas de um aluno, calcule a média aritmética 
//e exiba mensagem de "APROVADO" ou "REPROVADO", considerando a média de aprovação maior ou igual a 6,0.

#include<stdio.h>

int main(){
	int n1, n2;
	float media;
	
	printf("----- Media Aritimetica -----\n");
	printf("Insira a primeira nota: ");
	scanf("%d", &n1);
	printf("Insira a segunda nota:");
	scanf("%d", &n2);
	
	media = (n1 + n2) / 2;
	
	if(media >= 6){
		printf("\nAprovado!");
	}
	else{
		printf("\nReprovado!");
	}
	return 0;
}
