//Voc� tem um desejo incontrol�vel de descobrir quantos dias voc� j� viveu em toda a sua vida, 
//ent�o fa�a um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois 
//calcule e escreva o nome e o n�mero de dias, aproximados, j� vividos por essa pessoa.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int ano, ano2, dias;
	
	printf("Digite o ano em que voc� nasceu: ");
		scanf("%d", &ano);
	fflush(stdin);
	printf("Digite o ano que estamos: ");
		scanf("%d", &ano2);
	
	dias = (ano2 - ano) * 365;
	
	printf("Voc� j� viveu aproximadamente %d dias", dias);
		
		
	return 0;
}
