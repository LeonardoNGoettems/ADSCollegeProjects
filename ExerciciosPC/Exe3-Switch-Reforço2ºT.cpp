#include<stdio.h>
#include<windows.h>
//Questão3
int main()
{
	int Opcao;
	float preco, valor_final, desconto_juros;
	
	printf("Digite o valor base do curso em R$: ");
	scanf("%f", &preco);
	
	printf("\n --- Condicoes de Pagamento ---");
	printf("\n1 - A vista em dinheiro ou cheque (10%% de desconto)");
	printf("\n2 - A vista no cartão de credito (5%% de desconto)");
	printf("\n3 - Em duas vezes, sem juros");
	printf("\n4 - Em 3 vezes, com 10%% de juros");
	printf("\nEscolha a opcao desejada: ");
	scanf("%d", &Opcao);
	
	switch(Opcao)
	{
			case 1: 
				desconto_juros = preco * 0.10;
				valor_final = preco - desconto_juros;
				printf("\nDesconto: R$%.2f\nValor total a pagar: R$%.2f", desconto_juros, valor_final);
				break;
			
			break;
		case 2: 
				desconto_juros = preco * 0.05;
				valor_final = preco - desconto_juros;
				printf("\nDesconto: R$%.2f\nValor total a pagar: R$%.2f", desconto_juros, valor_final);
			break;
		case 3:
				desconto_juros = preco / 2;
				valor_final = preco - desconto_juros;
				printf("\nValor a ser Dividido: R$%.2f\nValor total a pagar em duas parcelas de: R$%.2f", preco, valor_final);
			break;
		case 4:
				desconto_juros = preco * 0.10;
				valor_final = preco + desconto_juros;
				printf("\nJuros: R$%.2f\nValor total a pagar R$%.2f", desconto_juros, valor_final/3);
			
			break;
		defaut:
			printf("\nOpcao de pagamento invalida!\n");
	}
		system("\npause");
	return 0;
}
