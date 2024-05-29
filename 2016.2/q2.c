//A sequencia de Recamán é uma sequência, onde seus os termos são dados pela seguinte
//relação:
// -  A0 = 0; para n > 0,
// -  An = An-1 – n, se o termo for positivo e já não estiver na sequência,
// -  An = An-1 + n, caso contrário.
//Escreva um programa em C, que gere e armazene em um vetor de vinte posições, os 20
//primeiros termos da série (seu algoritmo deverá ser feito de forma a permitir a mudança
//do tamanho do vetor com o mínimo de impacto).
//Exemplo da série de Recamán até o nono termo: 0, 1, 3, 6, 2, 7, 13, 20, 12, 21...

#include<stdio.h>

main(){
	int sequenciaRecaman[20];
	int iCont, jCont, checkNum, termo;
	
	for(iCont = 0; iCont < 20; iCont++){
		checkNum = 0;
		if(iCont == 0)
			sequenciaRecaman[iCont] = 0;
		else if(sequenciaRecaman[iCont - 1] - iCont >= 0){
			termo = sequenciaRecaman[iCont - 1] - iCont;
			for(jCont = 0; jCont < iCont; jCont++){
				if(termo == sequenciaRecaman[jCont]){
					checkNum = 1;
					break;
				}
			}
			if(checkNum == 0)
				sequenciaRecaman[iCont] = sequenciaRecaman[iCont - 1] - iCont;
			else
				sequenciaRecaman[iCont] = sequenciaRecaman[iCont - 1] + iCont;
		}
		else
			sequenciaRecaman[iCont] = sequenciaRecaman[iCont - 1] + iCont;		
	}
	
	for(iCont = 0; iCont < 20; iCont++)
		printf("%d " ,sequenciaRecaman[iCont]);	
	
}
