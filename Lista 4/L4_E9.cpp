/*Imagine uma brincadeira entre dois colegas, na qual um pensa um n�mero e o outro deve 
fazer chutes at� acertar o n�mero imaginado. Como dica, a cada tentativa � dito se o chute foi alto 
ou foi baixo. Elabore um algoritmo dentro deste contexto, que leia o n�mero imaginado e os 
chutes, ao final mostre quantas tentativas foram necess�rias para descobrir o n�mero.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, tentativaAdivinhar, numeroTentativas=0;
	
	printf("Informe o n�mero: ");
		scanf("%d", &numero);
	
	
	do{
		printf("Tente adivinhar o n�mero que foi digitado: ");
			scanf("%d", &tentativaAdivinhar);
		numeroTentativas++;
		
		if(tentativaAdivinhar > numero)
			printf("Chute errado! Tente chutar um n�mero menor\n");
		if(tentativaAdivinhar < numero)
			printf("Chute errado! Tente chutar um n�mero maior\n");
		if(tentativaAdivinhar == numero)
			printf("Parab�ns voc� acertou o n�mero com %d tentatias.", numeroTentativas);
	}while(tentativaAdivinhar != numero);
	
	
	return 0;
}
