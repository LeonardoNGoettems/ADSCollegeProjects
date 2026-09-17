#include<stdio.h>

main(){
	//Declaração de variaveis
	float nl, na, ne, med_final;
	
	//Ação = dar o numero para as variaveis
	
	
	printf("Insira o valor da Nota de laboratorio: ");
	scanf("%f", &nl);
	printf("Insira o valor da Nota de avaliacao: ");
	scanf("%f", &na);
	printf("Insira o valor da nota de exame: ");
	scanf("%f", &ne);
	
	med_final = nl*(20/100)+na*(30/100)+ne*(50/100);
	
	if(med_final >= 8 && med_final <= 10)
	{printf("Media Final A");
	}
	else{
	} if(med_final >= 7 && med_final < 8)
	{printf("Media Final B");
	}
	else{ if(med_final >= 6 && med_final < 7)
	{printf("Media Final C");
	}else{ if(med_final >= 5 && med_final < 6)
	{printf("Media Final D");
	}else{
	}(med_final < 5)
	{printf("Media Final E");
	}
	
	}
	}
	}
	}
