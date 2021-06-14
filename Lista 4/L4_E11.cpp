/*Construa um algoritmo que calcule a média aritmética de um conjunto de números pares que 
forem fornecidos pelo usuário. O valor de finalização será a entrada do número 0. Observe que 
nada impede que o usuário forneça quantos números ímpares quiser, com a ressalva de que eles 
não poderão ser acumulados*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero=0,numerosInformados=0;
	float mediaNumeros=0.0;
	
	printf("Para sair do programa digite 0\n");
	
	do {
		printf("Informe um número: ");
			scanf("%d", &numero);
		fflush(stdin);
		
		if(numero >= 2 && numero % 2 == 0) {
			mediaNumeros = mediaNumeros + numero;
			numerosInformados++;
		}	
	} while(numero != 0);
	system("cls");
		
	mediaNumeros /= numerosInformados;
	printf("A média dos números pares é: %.2f\n",mediaNumeros);
	
	return 0;
}
