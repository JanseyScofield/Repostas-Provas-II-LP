//Números Brasileiros são os números naturais N tais que existe um número natural B com 1 < B < N-1, cuja representação de B na base N tem todos os dígitos iguais. 
//Por exemplo, 7 é um número brasileiro pois (111)2= 7. O número 8 é um número brasileiro, pois é igual a (22)3 = 8.
//Escreva um programa em C que leia um número qualquer e informe se o número é ou não um número brasileiro.
//Lista de números Brasileiros:
//7, 8, 10, 12, 13, 14, 15, 16, 18, 20, 21, 22, 24, 26, 27, 28, 30, 31, 32, 33, 34, 35, 36, 38, 39,
//40, 42, 43, 44, 45, 46, 48, 50, 51, 52, 54, 55, 56, 57, 58, 60, 62, 63, 64, 65, 66, 68, 69, 70,
//72, 73, 74, 75, 76, 77, 78, 80, 81, 82, 84, 85, 86, 87, 88, 90,...

#include <stdio.h>

main()
{
    int num, base;
    int restoDivAnterior, restoDivAtual, resultadoDiv;
    int numBrasileiro = 1;

    scanf("%d", &num);
    base = 2;
	
    while(base < num){
    	restoDivAtual = num % base;
    	resultadoDiv = num / base;
    	while(resultadoDiv != 0){
    		restoDivAnterior = restoDivAtual;
    		restoDivAtual = resultadoDiv % base;
			if(restoDivAtual == restoDivAnterior)
				resultadoDiv /= base;
			else{
				numBrasileiro = 0;
				break;
			}
		}
		if(resultadoDiv == 0 && numBrasileiro)
			break;
		else
			base++;
	}
	
    if(numBrasileiro && base != num){
    	printf("Eh numero brasileiro.");
	}
	else{
		printf("Nao eh numero  brasileiro.");	
	}
}
