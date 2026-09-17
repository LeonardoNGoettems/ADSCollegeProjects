#include<stdio.h>
#define tfl 3
#define tfc 3
int main()
{
	//variaveis
	int mat[tfl][tfc], i, j, maior = 0;
	
	//entrada de dados
	printf("\n---- Dados para a Matriz ----\n");
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
			if(mat[i][j] > maior)
				maior = mat[i][j];
		}
	}
	printf("\nO maior numero da matriz e: %d", maior);
	return 0;	
}
