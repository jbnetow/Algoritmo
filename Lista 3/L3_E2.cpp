/*Fa�a um algoritmo que leia dois n�meros calcule o resultado da multiplica��o de um pelo 
outro sem utilizar a opera��o de multiplica��o (ou seja, utilizando apenas soma)*/
#include<stdio.h>
int main(){
	int num1, num2, contador, conta;
	
	
	printf("Digite o primeiro numero: ");
		scanf("%d", &num1);
	printf("Digite o segundo numero: ");
		scanf("%d", &num2);
		
	conta=0;
		
	for(contador=1; contador <= num1; contador++){
		conta = conta + num2;
	}
	printf("%d", conta);
	
	return 0;
}
