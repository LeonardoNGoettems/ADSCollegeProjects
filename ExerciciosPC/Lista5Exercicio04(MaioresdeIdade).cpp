 #include<stdio.h>
 main(){
 	int idade, num, maior_idade;
 	
 	maior_idade =0;
 	num = 0;
 	
 	while(num<10){
 		
 		printf("Qual a idade da pessoa %d:  ", num + 1);
 		scanf("%d", &idade);
 		if(idade>=18){
 			maior_idade++;
 		}
 			num=num+1;
 		
 	}
 	printf("quantas pessoas sao maiores de idade: %d", maior_idade);
 	
 }
