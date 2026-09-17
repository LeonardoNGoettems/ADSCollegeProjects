//2:-) Faça um programa que leia a idade de uma pessoa e diga se ela pode votar.

#include<stdio.h>

int main(){
	int idade;
	
	printf("----- Idade Legal apra votar -----\n");
	printf("Qual a sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 16){
		printf("Pode votar!\n");
	}
	else{
		printf("Nao pode votar!\n");
	}
}
