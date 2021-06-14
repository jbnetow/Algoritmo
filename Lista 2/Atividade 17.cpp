//Você tem um desejo incontrolável de descobrir quantos dias você já viveu em toda a sua vida, 
//então faça um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois 
//calcule e escreva o nome e o número de dias, aproximados, já vividos por essa pessoa.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int ano, ano2, dias;
	
	printf("Digite o ano em que você nasceu: ");
		scanf("%d", &ano);
	fflush(stdin);
	printf("Digite o ano que estamos: ");
		scanf("%d", &ano2);
	
	dias = (ano2 - ano) * 365;
	
	printf("Você já viveu aproximadamente %d dias", dias);
		
		
	return 0;
}
