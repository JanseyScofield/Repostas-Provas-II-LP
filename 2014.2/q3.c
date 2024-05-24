//Um número triangular é um número natural que pode ser representado na forma de triângulo equilátero. Foi
//desenvolvido por Gauss em 1788 quando ele tinha apenas 10 anos. Para encontrar o n­ésimo número triangular a
//partir do anterior basta somar­lhe n unidades. Os primeiros 5 números triangulares são:
//· 1 = 1
//· 3 = 1+2
//· 6 = 1+ 2+ 3
//· 10 = 1+2+3+4
//· 15 = 1+2+3+4+5
//Escreva um programa em C que calcule a soma dos recíprocos dos números triangulares para N termos, onde N é
//uma entrada para o programa em questão.
//S=1/1+1/3+1/6+1/10+1/15+...

#include<stdio.h>

main(){
	float soma,numTriangular,aux;
	int termos, iCont;
	
	scanf("%d", &termos);
	
	float listaTriangulares[termos];
	
	numTriangular = 0;
	
	for(iCont = 0; iCont < termos; iCont++){
		aux = iCont + 1;
		numTriangular += aux;
		listaTriangulares[iCont] = numTriangular;
	}
	
	soma = 0;
	
	for(iCont = 0; iCont < termos; iCont++)
		soma += 1/listaTriangulares[iCont];
	
	printf("%.2f", soma);
}
