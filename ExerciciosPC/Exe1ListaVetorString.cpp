#include<stdio.h>
#define tf 7
main()
{
	int vGMarcados[tf], vGSofridos[tf], i, pontos = 0;
	
	for(i = 0; i < tf; i++)
	{
		printf("\nRodada %d - Gols Marcados: ", i+1);
		scanf("%d", &vGMarcados[i]);
		printf("Rodada %d - Gols Sofridos: ", i+1);
		scanf("%d", &vGSofridos[i]);
	}
	for(i = 0; i < tf; i++)
	{
		if(vGMarcados[i] > vGSofridos[i])
			pontos = pontos + 3;
		else if(vGMarcados[i] == vGSofridos[i])
			pontos = pontos + 1;
	}
	printf("O Time fez um total de %d", pontos);
}
