/*Imagine uma brincadeira entre dois colegas, na qual um pensa um número e o outro deve 
fazer chutes até acertar o número imaginado. Como dica, a cada tentativa é dito se o chute foi alto 
ou foi baixo. Elabore um algoritmo dentro deste contexto, que leia o número imaginado e os 
chutes, ao final mostre quantas tentativas foram necessárias para descobrir o número.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, tentativaAdivinhar, numeroTentativas=0;
	
	printf("Informe o número: ");
		scanf("%d", &numero);
	
	
	do{
		printf("Tente adivinhar o número que foi digitado: ");
			scanf("%d", &tentativaAdivinhar);
		numeroTentativas++;
		
		if(tentativaAdivinhar > numero)
			printf("Chute errado! Tente chutar um número menor\n");
		if(tentativaAdivinhar < numero)
			printf("Chute errado! Tente chutar um número maior\n");
		if(tentativaAdivinhar == numero)
			printf("Parabéns você acertou o número com %d tentatias.", numeroTentativas);
	}while(tentativaAdivinhar != numero);
	
	
	return 0;
}
