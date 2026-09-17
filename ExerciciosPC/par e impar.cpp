#include<stdio.h>
main(){

//Faça um algoritmo que receba dois números, verifique se estes são pares ou ímpares 
//e exiba a mensagem sobre a situação de cada um. 
//Além de exibir o resultado das seguintes operações, com base na tabela abaixo:
//Situação	Operação entre os Números
//Dois números pares	------------------------Adição
//Dois números ímpares	------------------------Subtração
//O primeiro ser par e o segundo ímpar---------	Multiplicação
//O primeiro ser ímpar e o segundo par---------	Divisão
	
	int n1,n2;
	
	printf ("Informe o primeiro numero: ");
	scanf("%d",&n1);
	
	printf ("Informe o segundo numero: ");
	scanf("%d",&n2);
	
	if (n1%2==0 && n2%2==0)
	printf("O resultado da adicao e: %d", n1+n2);
	  else 
	     if (n1%2==0 && n2%2==0)
	printf("O resultado da subtracao e: %d", n1-n2);
	  else
	  
	     if (n1%2==0 && n2%2!=0)
	printf("O resultado da multiplicacao e: %d", n1*n2);
	  else 
	     if (n1%2!=0 && n2%2==0)
	printf("O resultado da divisão e: %.2f", (float)n1/n2);
	}
	
