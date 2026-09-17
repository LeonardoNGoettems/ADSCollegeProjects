#include<stdio.h>
#define tfl 3
#define tfc 3
int main()
{
	//variaveis
	int mat[tfl][tfc], i, j, soma = 0;
	
	//entrada de dados
	printf("---- Dados para a Matriz ----\n");
	for(i = 0; i < tfl; i++)
	{
		for(j = 0; j < tfc; j++)
		{
			printf("Insira o valor para a na posicao [%d][%d]: ", i,j);
			scanf("%d", &mat[i][j]);
		}
	}
	for(i = 0; i < tfl; i++)
	{
		for(j = 0; j < tfc; j++)
		{
			if(i == j)
				soma = soma + mat[i][j];
		}
	}
	printf("\nA soma da diagonal principal e: %d", soma);
	return 0;	
}
