/*Construa um algoritmo que seja capaz de dar a classifica��o ol�mpica de 3 pa�ses informados. 
Para cada pa�s � informado o nome, a quantidade de medalhas de ouro, prata e bronze. Considere 
que cada medalha de ouro tem peso 3, cada prata tem peso 2 e cada bronze, peso 1.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
 	
	char pais1[25], pais2[25], pais3[25]; 
	int ouro1, ouro2, ouro3, prata1, prata2, prata3, bronze1, bronze2, bronze3;
	int soma1, soma2, soma3;
	 	
	printf("Classifica��o ol�mpica de 3 pa�ses informados:\n");
	printf("1� Pa�s: ");
		fgets(pais1, 25, stdin);
	printf("2� Pa�s: ");
		fgets(pais2, 25, stdin);
	printf("3� Pa�s: ");
		fgets(pais3, 25, stdin);
		
	printf("Quantas medalhas de ouro tem o pa�s %s: ", pais1);
		scanf("%d", &ouro1);
	printf("Quantas medalhas de ouro tem o pa�s %s: ", pais1);
		scanf("%d", &prata1);
	printf("Quantas medalhas de ouro tem o pa�s %s: ", pais1);
		scanf("%d", &bronze1);
		
	system("cls");
		
	printf("Quantas medalhas de ouro tem o pa�s %s: ", pais2);
		scanf("%d", &ouro2);
	printf("Quantas medalhas de prata tem o pa�s %s: ", pais2);
		scanf("%d", &prata2);
	printf("Quantas medalhas de bronze tem o pa�s %s: ", pais2);
		scanf("%d", &bronze3);
		
	system("cls");	
	
	printf("Quantas medalhas de ouro tem o pa�s %s: ", pais3);
		scanf("%d", &ouro3);
	printf("Quantas medalhas de ouro tem o pa�s %s: ", pais3);
		scanf("%d", &prata3);
	printf("Quantas medalhas de ouro tem o pa�s %s: ", pais3);
		scanf("%d", &bronze3);
		
	system("cls");	
		
	soma1 = (ouro1 * 3) + (prata1 * 2) + bronze1;
	soma2 = (ouro2 * 3) + (prata2 * 2) + bronze2;
	soma3 = (ouro3 * 3) + (prata3 * 2) + bronze3;
	
	printf("%s:Classifica��o :%d\n", pais1, soma1);
	printf("%s:Classifica��o: %d\n", pais2, soma2);
	printf("%s:Classifica��o: %d\n", pais3, soma3);
	
	
	return 0;
}
