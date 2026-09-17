//3:-) Faça um programa que leia dois valores inteiros. 
//Se os valores forem iguais deverá se somar os dois, caso contrário multiplique um valor pelo outro. 
//Ao final de qualquer um dos cálculos deve-se atribuir o resultado para uma variável C e mostrar seu conteúdo na tela.

#include<stdio.h>

int main(){
	int n1, n2, c = 0;
	
	printf("----- Exercicio 3 - lista 3 -----\n");
	printf("Insira o primeiro numero: ");
	scanf("%d", &n1);
	printf("Insira o segundo numero: ");
	scanf("%d", &n2);
	
	if(n1 == n2){
		c = n1 + n2;
		printf("A soma dos valorer foi: %d", c);
	}
	else{
		c = n1 * n2;
		printf("A multiplicacao dos valores foi: %d", c);
	}
}
