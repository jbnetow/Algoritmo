/*Fazer um algoritmo que leia números inteiros até que a quantidade lida seja 100 ou até que 
seja lido um número negativo e mostrar a quantidade total de números lidos.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeros, numerosLidos=0;
	
	for(int i = 1; i <= 100; i++){
		printf("Digite o número %d: ", i);
			scanf("%d", &numeros);
		fflush(stdin);	
		
		if(numeros < 0){
			printf("Programa finalizado!");
			break;
		}
		else
			numerosLidos++;
	}
	system("cls");
	printf("Quantidade de números lidos: %d", numerosLidos);
	
	return 0;
}
