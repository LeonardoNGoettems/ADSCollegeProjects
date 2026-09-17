#include<stdio.h>
int main()
{
	int i, soma;
	i = 1;
	soma = 0;
	while(soma < 100)
	{
		i = i * 2;
		soma = soma + i;
	}
	printf("%d", soma);
}
