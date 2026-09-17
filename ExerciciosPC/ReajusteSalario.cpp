//2:-) Faça um algoritmo que receba o salário do funcionário, calcule 
//e exiba a porcentagem de reajuste e o salário reajustado do funcionário de acordo com a seguinte regra:
//salários até R$ 800,00, reajuste de 50%;
//salários maiores que R$ 800,00, reajuste de 30%.

#include<stdio.h>

int main(){
	float salario, reajuste, aumento, nSalario;
	
	printf("---- Reajuste de salario ----\n");
	printf("Insira seu salario:");
	scanf("%f", &salario);
	
	if(salario <= 800){
		reajuste = 0.5;
		aumento = salario * reajuste;
		nSalario = salario + aumento;
		printf("O aumento de salario foi R$ %.2f totalizando o novo salario em R$ %.2f", aumento, nSalario);
	}
	else{
		reajuste = 0.3;
		aumento = salario * reajuste;
		nSalario = salario + aumento;
		printf("O aumento de salario foi R$ %.2f totalizando o novo salario em R$ %.2f", aumento, nSalario);
	}
}
