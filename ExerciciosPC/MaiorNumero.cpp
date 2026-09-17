//3:-) Dados dois números inteiros e distintos, 
//construa um algoritmo que seja capaz de definir qual é o maior número, dentre os números fornecidos.

#include<stdio.h>

int main(){
	int n1, n2, maior = 0;
	
	printf("----- Maior numero -----\n");
	printf("Insira o primeiro numero: ");
	scanf("%d", &n1);
	printf("Insira o segundo numero: ");
	scanf("%d", &n2);
	
	if(n1 > n2){
		maior = n1;
		printf("\nO primeiro numero %d e o maior numero", maior);
	}
	else{
		maior = n2;
		printf("\nO segundo numero %d e o maior numero", maior);
	}
	
}
