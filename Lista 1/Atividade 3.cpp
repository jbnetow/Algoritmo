//Construa um algoritmo que calcule a m�dia aritm�tica de 3 n�meros quaisquer fornecidos pelo usu�rio.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, num3, media;
	
	printf("Digite os valores que deseja calcular a m�dia aritm�tica: \n");
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
	printf("A m�dia dos valores recebidos �: %.2f \t", media);
	
	
	return 0;
}
