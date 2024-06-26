//Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um programa em C que calcule e imprima
//quantos anos serão necessários para que Zé seja maior que Chico.

#include<stdio.h>

main(){
	float alturaChico, alturaZe;
	int anos;
	
	alturaChico = 1.5;
	alturaZe = 1.1;
	anos = 0;
	
	while(alturaChico >= alturaZe){
		alturaChico+=0.02;
		alturaZe+=0.03;
		anos++;	
	}
	printf("Ze ficara maior que Chico em %d anos.", anos);
}
