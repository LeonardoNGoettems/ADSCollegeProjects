#include<stdio.h>

main(){
	//Somar os numeros até 10
	int num, soma=0;
	while(num<=10){//condição
	soma = soma + num;
	num = num + 1;
	}
	printf("Soma = %d", soma);
	
}
