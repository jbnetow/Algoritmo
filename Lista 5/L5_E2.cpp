/*2. Desenvolva um programa em C que leia três valores numéricos e apresente o maior valor informado no 
meio de uma janela limpa.*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valor1, valor2, valor3;
	
	printf("Informe o valor 1: ");
		scanf("%f", &valor1);
	fflush(stdin);
	printf("Informe o valor 2: ");
		scanf("%f", &valor2);
	fflush(stdin);
	printf("Informe o valor 3: ");
		scanf("%f", &valor3);
	fflush(stdin);
	
	system("cls");
	
	if(valor1 > valor2 && valor1 > valor3)
		printf("Maior valor: %.2f", valor1);
	else if(valor2 > valor1 && valor2 > valor3)
		printf("Maior valor: %.2f", valor2);
	else if(valor3 > valor1 && valor3 > valor2)
		printf("Maior valor %.2f", valor3);
	
	return 0;
}
