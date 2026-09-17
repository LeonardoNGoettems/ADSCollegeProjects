#include<stdio.h>

main(){
	//Variaves
	int idade;
	
	printf("Qual a idade do inscrito: ");
	scanf("%d", &idade);
	
	//Condição
	if(idade>=18){

		printf("O inscrito tem idade para tirar a carteira de habilitacao");
	}
	else{
		printf("O inscrito nao pode tirar carteira de habilitacao pois tem menos de dezoito anos");
	}
	
}
