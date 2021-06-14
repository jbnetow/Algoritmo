//Construa um algoritmo que calcule a média aritmética de 3 números quaisquer fornecidos pelo usuário.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, num3, media;
	
	printf("Digite os valores que deseja calcular a média aritmética: \n");
	printf("VALOR 1: \n");
		scanf("%f", &num1);
	fflush(stdin);
	printf("VALOR 2: \n");
		scanf("%f", &num2);
	fflush(stdin);
	printf("VALOR 3: \n");
		scanf("%f",&num3);
	fflush(stdin);
		
	media = (num1 + num2 + num3) / 3;
	printf("A média dos valores recebidos é: %.2f \t", media);
	
	
	return 0;
}
