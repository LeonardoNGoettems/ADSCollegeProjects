#include<stdio.h>

main(){
	//exercicio de média ponderada utilizando condição encadeada
	//variaveis
	float n1, n2, media;
	
	printf("Insira a nota 1:");
	scanf("%f", &n1);
	
	printf("Insira a nota 2:");
	scanf("%f", &n2);
	
	media=(n1+n2)/2;
	
	if (media>=6){
		//Aprovado
		printf("Aprovado");
	}else{
		//Reprovado ou Exame
		if(media>3){
			//exame
			printf("Exame");
		}else{
			//Reprovado
			printf("Reprovado");
		}
	}
}
