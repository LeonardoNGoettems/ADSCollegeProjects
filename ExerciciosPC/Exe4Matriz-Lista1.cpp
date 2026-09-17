#include<stdio.h>
#define tfl 3
#define tfc 2
int main()
{
	//variaveis
	int i, j;
	float jun[tfl][tfc], jul[tfl][tfc], ago[tfl][tfc], soma = 0;
	
	//entrada de dados
	printf("---- Junho ----\n");
	for(i = 0; i < tfl; i++)
	{
		for(j = 0; j < tfc; j++)
		{
			printf("Insira o valor do produto %d - loja %d: ", i+1, j+1);
			scanf("%f", &jun[i][j]);
		}
	}
	printf("\n---- Julho ----\n");
	for(i = 0; i < tfl; i++)
	{
		for(j = 0; j < tfc; j++)
		{
			printf("Insira o valor do produto %d - loja %d: ", i+1, j+1);
			scanf("%f", &jul[i][j]);
		}
	}
	printf("\n---- Agosto ----\n");
	for(i = 0; i < tfl; i++)
	{
		for(j = 0; j < tfc; j++)
		{
			printf("Insira o valor do produto %d - loja %d: ", i+1, j+1);
			scanf("%f", &ago[i][j]);
		}
	}
	//A - Total vendido de cada prodto em cada loja no trimestre
	printf("\nValor trimestral de cada produto de cada loja\n");
	for(i = 0; i < tfl; i++)
	{
		for(j = 0; j < tfc; j++)
		{
			soma = 0;
			soma = soma + jun[i][j] + jul[i][j] + ago[i][j];
			printf("\nO valor do Produto %d - loja %d no trimestre foi: RS%.2f", i+1, j+1, soma);
		}
	}
	printf("\n");
	//B - Total vendido de cada prodto em todas as lojas no trimestre
	printf("\nValor trimestral de cada produto de em todas loja\n");
	for(i = 0; i < tfl; i++)
	{
		soma = 0;
		for(j = 0; j < tfc; j++)
		{
			soma = soma + jun[i][j] + jul[i][j] + ago[i][j];
		}
		printf("\nA Soma do produto %d em todas as lojas no trimestre foi: RS%.2f", i+1, soma);		
	}
	printf("\n");
	//C - Total vendido em cada loja no trimestre
	printf("\nTotal vendido em cada loja no trimestre\n");
	for(j = 0; j < tfc; j++)
	{
		soma = 0;
		for(i = 0; i < tfl; i++)
		{
			soma = soma + jun[i][j] + jul[i][j] + ago[i][j];
		}
		printf("\nO total vendido em cada loja %d no trimestre foi: RS%.2f", j+1, soma);		
	}
	printf("\n\nValores trimestre com aumento de 15%%\n");
	for(i = 0; i < tfl; i++)
	{
	    for(j = 0; j < tfc; j++)
	    {
	        soma = 0;
	        soma = jun[i][j] + jul[i][j] + ago[i][j];
	        printf("\nO valor do Produto %d - Loja %d no trimestre seria: RS%.2f", i+1, j+1, soma * 1.15);
	    }
	}
	printf("\nValor trimestral de cada produto de em todas loja com aumento de 15%%\n");
	for(i = 0; i < tfl; i++)
	{
		soma = 0;
		for(j = 0; j < tfc; j++)
		{
			soma = soma + jun[i][j] + jul[i][j] + ago[i][j];
		}
		printf("\nA Soma do produto %d em todas as lojas no trimestre com o aumento seria: RS%.2f", i+1, soma * 1.15);		
	}
	//C - Total vendido em cada loja no trimestre
	
	printf("\nTotal vendido em cada loja no trimestre com aumento de 15%%\n");
	for(j = 0; j < tfc; j++)
	{
		soma = 0;
		for(i = 0; i < tfl; i++)
		{
			soma = soma + jun[i][j] + jul[i][j] + ago[i][j];
		}
		printf("\nO total vendido em cada loja %d no trimestre com o aumento seria: RS%.2f", j+1, soma * 1.15);		
	}
	return 0;	
}
