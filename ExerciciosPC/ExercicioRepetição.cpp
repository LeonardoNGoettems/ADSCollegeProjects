#include<stdio.h>

main(){
	int a, b;
	b = 1; //numero de inicialização
	
	printf("Numero da tabela: ");
	scanf("%d", &a);
	
	while(b <= 10) //condição de parada
	{printf("%dx%d=%d\n",a,b, a*b);
	b=b+1;
	}
	
}
