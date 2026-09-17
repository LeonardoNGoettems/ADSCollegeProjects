//1:-) Faça um programa que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que C.

#include<stdio.h>

int main(){
	int a, b, c, soma;
	
	printf("----- Soma e Maior -----\n");
	printf("Insira o valor de A: ");
	scanf("%d", &a);
	printf("Insira o valor de B: ");
	scanf("%d", &b);
	printf("Insira o valor de C: ");
	scanf("%d", &c);
	
	soma = a + b;
	if(soma < c){
		printf("A soma de A e B e menor que C");
	}
	else{
		printf("Soma e maior que a C");
	}
}
