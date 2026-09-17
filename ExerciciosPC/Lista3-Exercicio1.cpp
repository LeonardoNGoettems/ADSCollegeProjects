#include<stdio.h>

main(){
	//A,B,C mostrar caso A+B < C
	//Variavel
	float A, B, C;
	printf("Insira o valor de A:");
	scanf("%f", &A);
	
	printf("Insira o valor de B:");
	scanf("%f", &B);
	
	printf("Insira o valor de C:");
	scanf("%f", &C);
	
	if(A+B<C){
		//Verdadeiro
		printf("A+B e menor que C");
	}
	else{
		printf("A+B e maior que C");
	
	}
	}
