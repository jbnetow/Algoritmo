//Escrever um algoritmo que determine se um n�mero inteiro qualquer � PAR ou IMPAR.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Informe um n�mero para saber se ele � par ou impar: \n");
		scanf("%d", &num);
		
	
	if(num % 2 > 0){
		printf("Esse n�mero � impar");
	}
	else{
		printf("Esse n�mero � par");
	}
	return 0;
}
