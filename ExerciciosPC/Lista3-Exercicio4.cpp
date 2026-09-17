#include<stdio.h>

main(){
	float altura, peso_ideal;
	int sexo; //1 para homens e 0 para mulheres
	
	printf("Qual o sexo do paciente: ");
	scanf("%d", &sexo);
	
	printf("Qual a altura do paciente: ");
	scanf("%f", &altura);
	
	//condição
	if(sexo==1){
		peso_ideal = (72.7 * altura) - 58;
	}
	else{
		peso_ideal = (62.1 * altura) - 44.7;
	}
	printf("O Peso ideal do paciente e: %f", peso_ideal);
	
}
