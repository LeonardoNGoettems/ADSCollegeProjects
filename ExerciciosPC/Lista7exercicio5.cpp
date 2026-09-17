#include<stdio.h>
main(){
	//variavel
	float preco, perc, valorau, valorau_imp, valortotal;
	int cat;
	char sit;
	printf("Qual o preco do produto: ");
	scanf("%f", &preco);
	
	//condição de parada
	while(preco != 0){
		printf("Qual a categoria do produto: ");
		scanf(" %c", &cat);
		
		//condições de escolha
		switch (cat){
		case '1':
		   if (preco <= 25 && cat == '1'){
		      perc = 5;	
		      valorau = preco * (perc / 100);
		
		   }
		   else{
		   	  perc = 12;
		   	  valorau = preco * (perc / 100);
		   }
		break;
		
		case '2':
		   if (preco <= 25 && cat == '2'){
			  perc = 8;
			  valorau = preco * (perc / 100);   
		   }
		   else{
		   	  perc = 15;
		   	  valorau = preco * (perc / 100);
		   }	
		break;
		
		case '3':
		   if (preco <= 25 && cat == '3'){
			  perc = 10;
			  valorau = preco * (perc / 100);	
		   }
		   else{
		   	  perc = 18;
		   	  valorau = preco * (perc / 100);
		   }
		
		break;
		}
		printf("Valor do Aumento ficou: %.2f\n", valorau);
		printf("Qual a situacao do produto: ");
    	scanf(" %c", &sit);
    	
	    if(cat == 2 || sit == 'R'){
    		valorau_imp = (5/100)*preco;
    		valortotal = valorau+valorau_imp;
    		printf("O valor do imposto foi: %.2f\n", valorau_imp);
    		printf("O valor do aumento com imposto foi: %.2f\n", valortotal);
    		
    	}

    } 
    	printf("Qual a situacao do produto: ");
    	scanf(" %c", &sit);
    	
	    if(cat == 2 || sit == 'R'){
    		valorau_imp = (5/100)*preco;
    		valortotal = valorau+valorau_imp;
    		printf("O valor do imposto foi: %.2f\n", valorau_imp);
    		printf("O valor do aumento com imposto foi: %.2f\n", valortotal);
    		
    	}	
}
