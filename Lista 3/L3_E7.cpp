//Elabore um algoritmo que apresenta as compras de frutas efetuadas por usu�rio (quantidade 
//de frutas para cada tipo), sendo elas identificadas por meio de um n�mero.
//1 => ABACAXI
//2 => MA�A
//3 => PERA
//Usando a instru��o faca...enquanto identifique quais as frutas desejadas por seu usu�rio, 
//lembrando que ele pode desejar somente um tipo de fruta ou mais que um.
//Deve existir o cuidado na identifica��o correta das frutas, pois o feirante s� possui estes tr�s 
//tipos. Caso o usu�rio escolha uma fruta n�o existente deve ser notificado que a fruta n�o est�
//dispon�vel e a solicita��o deve ser feita novamente sobre qual fruta ele deseja.
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int fruta;
	int abacaxi=0, maca=0, pera=0;
	
	do{
		printf("Digite o n�mero correspondente a fruta que voc� deseja comprar:\n");
		printf("1 => Abacaxi\n");
		printf("2 => Ma��\n");
		printf("3 => P�ra\n");
		printf("4 => Finalizar compras.\n");
			scanf("%d", &fruta);
		fflush(stdin);
		system("cls");
		
		if(fruta < 1 || fruta > 4)
			printf("A fruta n�o est� dispon�vel.");
		
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
		printf("Ma��: %d\n", maca);
	if(pera >= 1)
		printf("P�ra: %d\n", pera);
	
	return 0;
}
