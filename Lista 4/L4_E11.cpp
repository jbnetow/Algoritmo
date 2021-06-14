/*Construa um algoritmo que calcule a m�dia aritm�tica de um conjunto de n�meros pares que 
forem fornecidos pelo usu�rio. O valor de finaliza��o ser� a entrada do n�mero 0. Observe que 
nada impede que o usu�rio forne�a quantos n�meros �mpares quiser, com a ressalva de que eles 
n�o poder�o ser acumulados*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero=0,numerosInformados=0;
	float mediaNumeros=0.0;
	
	printf("Para sair do programa digite 0\n");
	
	do {
		printf("Informe um n�mero: ");
			scanf("%d", &numero);
		fflush(stdin);
		
		if(numero >= 2 && numero % 2 == 0) {
			mediaNumeros = mediaNumeros + numero;
			numerosInformados++;
		}	
	} while(numero != 0);
	system("cls");
		
	mediaNumeros /= numerosInformados;
	printf("A m�dia dos n�meros pares �: %.2f\n",mediaNumeros);
	
	return 0;
}
