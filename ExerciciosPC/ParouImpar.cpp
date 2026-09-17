//4:-) Dado um número inteiro, construa um algoritmo que seja capaz de definir se o número fornecido é par ou ímpar, 
//exibindo o resto da divisão por 2.
//Par ' Se (Numero % 2) ==0 
//ÍmPar ' Se (Numero % 2) !=0

#include<stdio.h>

int main(){
	int n1;
	
	printf("----- Par ou Impar -----\n");
	printf("Insira um numero: ");
	scanf("%d", &n1);
	
	if(n1 % 2 == 0){
		printf("O numero e par!");
	}
	else{
		printf("O numero e impar!");
	}
}

