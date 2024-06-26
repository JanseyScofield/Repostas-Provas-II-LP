//Dizemos que um número i é congruente módulo m a j se i % m = j % m. Por exemplo: 35 é congruente módulo 4 a 39, pois 35 % 4 = 3 = 39 % 4.
//Escreva um programa em C, que leia i, j e m e imprima todos os pares de números i* congruente modulo m a j*, onde i* <= i e j* <= j.

#include <stdio.h>

main(){
	int i, j, m;
	int iVariavel, jVariavel;
	
	scanf("%d %d %d", &i,&j,&m);
	
	for(iVariavel = 1; iVariavel <= i; iVariavel ++){
		for(jVariavel = 1; jVariavel <=  j; jVariavel++){
			if(iVariavel % m == jVariavel % m)
				printf("%d, %d\n", iVariavel, jVariavel);
		}
	}
}
