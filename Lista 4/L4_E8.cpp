/*Anacleto tem 1,50 metro e cresce 2 centímetros por ano, enquanto Felisberto tem 1,10 metro 
e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão 
necessários para que Felisberto seja maior que Anacleto.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float anacleto=1.50, felisberto=1.10, anaCem=0.2, felisCem=0.3;
	int anos=0;
	
	while(anacleto >= felisberto){
		anacleto = anacleto + anaCem;
		felisberto = felisberto + felisCem;
		anos++;
	}
	printf("Vai demorar %d anos para Felisberto ficar maior que Anacleto.", anos);
	
	return 0;
}
