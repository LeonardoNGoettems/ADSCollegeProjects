#include<stdio.h>

main(){
	//variaveis
	int num = 0, num2, tabuada;
	printf("Digite o valor da tabuada: ");
	scanf("%d", &num2);
	
	while (num<10){
		num=num+1;
		tabuada = num * num2;
		printf("%dx%d=%d\n", num2, num, tabuada);
	}
	
}
