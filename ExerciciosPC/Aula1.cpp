#include<stdio.h>

main(){
	//Variaveis
	float anodenascimento, anoatual, idade;
	
	//Solicita informações para o usuario e salva
	printf("Em qual ano voce nasceu?: ");
	scanf("%f", &anodenascimento);
	printf("Qual e o ano atual?: ");
	scanf("%f", &anoatual);
	
	//calculo
	idade = anoatual - anodenascimento;
	
	//mostra o resultado
	printf("Sua idade e: %.0f", idade);
}



//w=2t+4Y-3x
//x=2t-4
//y=t/2+4
//w=2t+4*(t/2+4)-3*2t-4
