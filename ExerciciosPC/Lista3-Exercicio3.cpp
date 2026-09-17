#include<stdio.h>

main(){
	//Variaveis
	int A, B, C;
	
	printf("Insira o valor de A: ");
	scanf("%d", &A);
	printf("Insira o valor de B: ");
	scanf("%d", &B);
	
	//calculo
	//se A = B entao C = A + B
	//se A != B entao C = A * B
	
	if(A==B){
		C = A + B;
		printf("o valor de C e %d", C);
	}
	else{
		C = A * B;
		printf("o valor de C e %d", C);
	}
}
