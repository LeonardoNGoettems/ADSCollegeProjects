#include<stdio.h>
main(){
	//interpretar a questão
	//criar as variaveis
	int num, maior, menor, cont=0;
	float soma=0, media;
	
	//entrada d eleitura
	printf("Numero: ");
	scanf("%d", &num);
	maior=num;
	menor=num;
	
	//enquanto for numero positivo continua a repetição
	while(num>0){
		if(num>maior)//maior
		   maior=num;
		if(num<menor)//menor
		   menor=num;
		   
		soma = soma + num;
		cont ++;
		//saida de leitura
		printf("Numero: ");
		scanf("%d", &num);
	}
	media = soma/cont;
	printf("\nMaior = %d", maior);
	printf("\nMenor = %d", menor);
	printf("\nmedia = %.2f", media);
	
}
