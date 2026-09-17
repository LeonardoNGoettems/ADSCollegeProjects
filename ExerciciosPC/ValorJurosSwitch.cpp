#include<stdio.h>

main(){
	//elabore um algoritimo de pagamento
	//determine as variaveis
	char opcao;
	int n; //será usado como numero de parcelas
	float valor_curso, Juros, desconto, valor_final;
	
	//determinar o menu
	
	printf("***Modo de pagamento***");
	printf("\n1 A vista em dinheiro ou cheque, recebe 10 porcento de desconto");
	printf("\n2 A vista no cartao de credito, recebe 5 porcento de desconto");
	printf("\n3 Em 2 vezes, preco normal de venda sem juros");
	printf("\n4 Em 3 vezes, preco normal de venda mais juros de 10 porcento");
	printf("\nF - Finalizar\n");
	scanf("%c", &opcao);

switch(opcao){
	case '1':
	    printf("Valor do curso: ");
	    scanf("%f", &valor_curso);
	
	    valor_final = (valor_curso-10.0/100*valor_curso);
	    printf("Valor final: %.2f", valor_final);
	break;
	
	case '2':
		printf("Valor do curso: ");
	    scanf("%f", &valor_curso);
	    
	    valor_final = (valor_curso-5.0/100*valor_curso);
	    printf("Valor Final: %.2f", valor_final);
	    
	break;
	
	case '3':
		printf("Valor do curso: ");
	    scanf("%f", &valor_curso);
	    
	    valor_final = valor_curso/2;
	    printf("Valor Final: %.2f", valor_final);
	    
	break;
	
	case '4':
		printf("Valor do curso: ");
	    scanf("%f", &valor_curso);
	    printf("Quantas parcelas: ");
	    scanf("%d", &n);
	    
	    valor_final = valor_curso/n+10.0/100*valor_curso;
	    printf("Valor final: %.2f", valor_final);
	    
	break;
		
	case 'F':
		printf("Finalizando");
	    
}	
	//informar a condição
	//efetuar o calculo
	//efetuar um case para cada opção
	// 1 - À vista em dinheiro ou cheque, recebe 10% de desconto.
	// 2 - À vista no cartão de crédito, recebe 5% de desconto.
	// 3 - Em 2 vezes, preço normal de venda sem juros.
	// 4 - Em 3 vezes, preço normal de venda mais juros de 10%.
	
	
	
	
}
