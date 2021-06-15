//Faça um programa que leia três valores numéricos e os mostre em ordem crescente
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3;
	int maiorNum, menorNum, numMeio;
	
	printf("Digite o primeiro número: ");
		scanf("%d", &num1);
	printf("Digite o segundo número: ");
		scanf("%d", &num2);
	printf("Digite o terceiro número: ");
		scanf("%d", &num3);
		
		
	if(num1 > num2 && num1 > num3)
		maiorNum = num1;
		else if(num2 > num1 && num2 > num3)
			maiorNum = num2;
			else if(num3 > num1 && num3 > num2)
				maiorNum = num3;
				
	
	if(num1 < num2 && num1 < num3)
		menorNum = num1;
		else if(num2 < num1 && num2 < num3)
			menorNum = num2;
			else if(num3 < num1 && num3 < num2)
				menorNum = num3;
	
	
	if((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2))
		numMeio = num1;
		else if((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3))
			numMeio = num2;
			else if((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2))
				numMeio = num3;

	printf("Ordem crescente dos números digitados:\n%d\n%d\n%d",menorNum, numMeio, maiorNum);
	
	return 0;
}
