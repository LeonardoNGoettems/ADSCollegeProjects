#include<stdio.h>
main(){
	// Na disciplina de algoritmos, a nota final do estudante é calculada a partir de 3 notas
	// atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral 
	//e a um exame final. As notas variam de 0 a 10 
	//e a nota final é a média ponderada das 3 notas mencionadas. 
	//A tabela a seguir fornece os pesos das notas:
//Laboratório           peso 2
//Av. Semestral       peso 3
//Exame Final         peso 5

//Faça um algoritmo que receba as 3 notas do estudante, calcule 
//e imprima a média final e o conceito desse estudante. O conceito segue a tabela abaixo:
//Média Final	Conceito
//8.0  a  10.0A
//7.0  a  8.0	B
//6.0  a  7.0	C
//5.0  a  6.0	D
//<  5.0	E

	float nl,na,ne,med_final;
	
	printf("Informe a nota do laboratório: ");
	scanf("%f", &nl);
	printf("Informe a nota da av. semestral: ");
	scanf("%f", &na);
	printf("Informe a nota do ex. final: ");
	scanf("%f", &ne);
	
	med_final= (nl*2+na*3+ne*5)/10;
	
	if (med_final <5)
		printf ("E");
	else if (med_final>=5 && med_final<6)
		printf ("D");
	else if (med_final>=6 && med_final<7)
		printf ("C");
	else if (med_final>=7 && med_final<8)
		printf ("B");
	else if (med_final>=8 && med_final<=10)
		printf ("A");
}
