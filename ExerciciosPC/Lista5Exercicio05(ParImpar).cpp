 #include<stdio.h>
main(){
	int num=0, num2, par=0, impar=0;
	
	printf("Digite um numero: ");
		scanf("%d", &num2);
	while (num<5){
		num++;
		if(num2%2==0){
		
		par++;}
		else{
		impar++;}
		
	}
	printf("\nNumeros pares: %d", par);
	printf("\nNumeros Impares: %d", impar);
}
