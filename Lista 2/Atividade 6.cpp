//Escrever um algoritmo que determine se um número inteiro qualquer é PAR ou IMPAR.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Informe um número para saber se ele é par ou impar: \n");
		scanf("%d", &num);
		
	
	if(num % 2 > 0){
		printf("Esse número é impar");
	}
	else{
		printf("Esse número é par");
	}
	return 0;
}
