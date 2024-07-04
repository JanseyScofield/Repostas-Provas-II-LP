//Bruninho está programando um personagem virtual para o próximo desafio de um jogo de aventura em que, numa das fases, o personagem tem que entrar em um corredor,
//percorrer algumas salas e depois sair do corredor. Ele pode entrar apenas uma vez, e passar por cada sala apenas uma vez. Todas as salas possuem uma porta de entrada
//e uma de saída. Ao passar por uma sala o jogador ganha um certo número de vidas (que pode ser negativo!). O objetivo é passar pelo corredor coletando a maior 
//quantidade possível de vidas! Por sorte, sempre existe ao menos uma sala onde se ganha um número positivo de vidas.
// 0 1  2 3  4  5 6
//-2 5 -1 8 -11 7 3
//No exemplo acima, o personagem de Bruninho pode ganhar, no máximo, 12 vidas, por exemplo, entrando pela sala 1 e saindo pela sala 3 (5-1+8 = 12). 
//Você deve escrever um programa que, leia o número de vidas correspondentes a cada sala do corredor (o corredor possui dez salas), calcule e imprima a quantidade 
//máxima de vidas que será possível ganhar. 

#include<stdio.h>

main(){
	int salas[10], indexMaioresValores[2];
	int somaSalas,iCont, jCont, kCont;
	int maiorValor;
	
	for(iCont = 0; iCont < 10; iCont ++){
		scanf("%d", &salas[iCont]);
	}

	maiorValor  = 0;
	
	for(iCont = 0 ; iCont <= 8; iCont ++){
		for(jCont = 9;jCont > iCont; jCont --){
			somaSalas = salas[iCont];
			kCont = jCont;
			while(kCont > iCont){
				somaSalas += salas[kCont];
				kCont--;
			}
			if(maiorValor <= somaSalas){
				maiorValor = somaSalas;
				indexMaioresValores[0] = iCont;
				indexMaioresValores[1] = jCont; 
			}
		}
	}
	
	printf("Entrar na sala %d e sair na sala %d.", indexMaioresValores[0] , indexMaioresValores[1]);
}
