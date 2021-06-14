//Elabore um algoritmo que apresenta as compras de frutas efetuadas por usuário (quantidade 
//de frutas para cada tipo), sendo elas identificadas por meio de um número.
//1 => ABACAXI
//2 => MAÇA
//3 => PERA
//Usando a instrução faca...enquanto identifique quais as frutas desejadas por seu usuário, 
//lembrando que ele pode desejar somente um tipo de fruta ou mais que um.
//Deve existir o cuidado na identificação correta das frutas, pois o feirante só possui estes três 
//tipos. Caso o usuário escolha uma fruta não existente deve ser notificado que a fruta não está
//disponível e a solicitação deve ser feita novamente sobre qual fruta ele deseja.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int fruta;
	int abacaxi=0, maca=0, pera=0;
	
	do{
		printf("Digite o número correspondente a fruta que você deseja comprar:\n");
		printf("1 => Abacaxi\n");
		printf("2 => Maçã\n");
		printf("3 => Pêra\n");
		printf("4 => Finalizar compras.\n");
			scanf("%d", &fruta);
		fflush(stdin);
		system("cls");
		
		if(fruta < 1 || fruta > 4)
			printf("A fruta não está disponível.");
		
		if(fruta == 1)
			abacaxi++;
		else if(fruta == 2)
			maca++;
		else if(fruta == 3)
			pera++;
	}while(fruta < 1 || fruta > 4 || fruta != 4);
	
	printf("Suas compras:\n");
	if(abacaxi >= 1)
		printf("Abacaxi: %d\n", abacaxi);
	if(maca >= 1)
		printf("Maçã: %d\n", maca);
	if(pera >= 1)
		printf("Pêra: %d\n", pera);
	
	return 0;
}
