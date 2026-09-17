#include<stdio.h>
int main()
{
	int i = 1, soma = 0;
	do
	{
		i = i * 2;
		soma = soma + i;
	}while(soma < 100);
	printf("%d", soma);
}
