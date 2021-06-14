/*Escreva um algoritmo que imprima todas as possibilidades de que o lançamento de dois dados 
tenhamos o valor 7 como resultado da soma dos valores de cada dado.
*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int soma, possibilidades=0;
	
	for(int i=0; i < 7; i++){
		for(int j=0; j < 7; j++){
			soma = i + j;
			if(soma == 7){
				possibilidades++;
				printf("%d + %d = 7\n", i, j);
			}
		}
	}
	printf("Existem %d possibilidades de tirar 7 lançando 2 dados.\n", possibilidades);
	
	
	return 0;
}
