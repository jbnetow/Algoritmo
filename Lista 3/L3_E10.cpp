/*Fazer um algoritmo que leia n�meros inteiros at� que a quantidade lida seja 100 ou at� que 
seja lido um n�mero negativo e mostrar a quantidade total de n�meros lidos.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeros, numerosLidos=0;
	
	for(int i = 1; i <= 100; i++){
		printf("Digite o n�mero %d: ", i);
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
	printf("Quantidade de n�meros lidos: %d", numerosLidos);
	
	return 0;
}
