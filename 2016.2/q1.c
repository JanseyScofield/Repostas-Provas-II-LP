//Um número primo é um número que possui somente dois divisores: ele mesmo e o  número 1. Um número primo p é um número primo de Chen se o próximo número 
//ímpar (p + 2) é primo ou o produto de dois primos (subprimo). Escreva um programa em C, que leia um número e verifique se ele é um número primo de Chen. Por exemplo,
//2 é um primo de Chen, pois 2+2 = 4 e 4 é subprimo (2*2). 3 é um primo de Chen, pois 3+2 = 5 e 5 é primo.

#include<stdio.h>

main(){
	int primo, qtdDivPrimos, num2;
	int iCont, produto, primoAux1, primoAux2;
	int proxImparPrimo = 0, proxNumSubprimo = 0;
		
	scanf("%d", &primo);
	
	produto = 0;
	num2 = primo + 2;
	primoAux1 = 2;	
	
	while(primoAux1 < num2){
		qtdDivPrimos = 0;
		for(iCont = 1; iCont <= primoAux1; iCont++){
			if(primoAux1 % iCont == 0)
				qtdDivPrimos++;		
		}
		if(qtdDivPrimos == 2){
			primoAux2 = 2;
			while(primoAux2 < num2){
				qtdDivPrimos = 0;
				for(iCont = 1; iCont <= primoAux2; iCont++){
					if(primoAux2 % iCont == 0)
						qtdDivPrimos++;		
				}
				if(qtdDivPrimos == 2){
					produto = primoAux1*primoAux2;
					if(produto == num2){
						proxNumSubprimo = 1;
						primoAux1 = primoAux2 = num2;
					}
				}
				primoAux2++;
			}
		}
		primoAux1++;
	}
						
	qtdDivPrimos = 0;
	
	if(num2 % 2 == 1){
		for(iCont = 1; iCont <= num2; iCont++){
			if(num2 % iCont == 0)
				qtdDivPrimos++;
		}
		if(qtdDivPrimos == 2){
			proxImparPrimo = 1;
		}
	}
	
	if(proxNumSubprimo || proxImparPrimo)
		printf("Eh um primo de Chen!");
	else
		printf("Nao eh um primo de Chen.");
}
