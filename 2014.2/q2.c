//Números primos gêmeos na teoria dos números são dois números primos cuja diferença é igual a dois. Os primeiros
//pares de números primos gêmeos são (3, 5), (5, 7), (11, 13), (17, 19), (29, 31) e (41, 43).
//Escreva um programa em C que imprima os primeiros N pares de números primos, onde N é uma entrada para o
//programa em questão.

#include<stdio.h>

main(){
	int primo1, qtdDivisores1; 
	int primo2, qtdDivisores2;
	int iCont,jCont,kCont,vezes;
	
	scanf("%d", &vezes);
	
	primo1 = 3;
	iCont = 1;
	
	while(iCont <= vezes){
		qtdDivisores1 = 0;
		qtdDivisores2 = 0;
		for(jCont = 1; jCont <= primo1; jCont++){
			if(primo1 % jCont == 0)
				qtdDivisores1++;
		}
		if(qtdDivisores1 == 2){
			primo2 = primo1 - 2;
			for(kCont = 1; kCont <= primo2; kCont++){
				if(primo2 % kCont == 0)
					qtdDivisores2++;
			}
			if(qtdDivisores2 == 2){
				printf("(%d, %d) ", primo2, primo1);
				iCont++;
			}
		}
		primo1++;
	}
}
