#include<stdio.h>
#include<string.h>
#define tf 4
main()
{	
	//variaveis
	int i, vSaldo[tf], totalpontos = 0;
	char vNome[tf][20], Nome[20];
	//entrada de dados
	for(i = 0; i < tf; i++)
	{
		printf("\nQual o nome do jogador %d: ", i+1);
		fflush(stdin); //getchar();
		gets(vNome[i]);
		printf("Quantos pontos ele teve: ");
		scanf("%d", &vSaldo[i]);
		
	}
	//exibe jogador e ponto
	//soma de pontos
	for(i = 0; i < tf; i++)
	{
		printf("\nO Jogador %s tem %d pontos", vNome[i], vSaldo[i]);
		totalpontos = totalpontos + vSaldo[i];
	}
		printf("\nTotal de pontos: %d", totalpontos);
	//mostrar jogador e posição
	printf("\nQual o jogador que voce quer buscar: ");
	fflush(stdin);
	gets(Nome);
	i = 0;
	while(i < tf && stricmp(Nome, vNome[i])!=0)
		i++;
		if(i < tf)
			//achou
			printf("\nO jogador tem %d pontos e ele esta na posicao %d", vSaldo[i], i);
		else
			printf("\nJogador nao encontrado");
			
		
}
