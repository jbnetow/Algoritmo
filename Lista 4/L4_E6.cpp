/*Elabore um algoritmo que imprima todos os n�meros primos existentes entre N1 e N2, em que 
N1 e N2 s�o n�meros naturais fornecidos pelo usu�rio.*/
#include<stdio.h> 
#include<locale.h> 
int main(){
	setlocale(LC_ALL, "Portuguese"); // Ajuste para aceitar a acentua��o do Portugu�s

	int i, x, numero1, numero2, maiorNumero, menorNumero;
	
	printf("Algoritmo para informar os n�meros primos entre dois n�meros escolhidos por voc�!\n");
	
	do{
		printf("Informe o primeiro n�mero: ");
		scanf("%d", &numero1);
		fflush(stdin);
		
		printf("\nInforme o segundo n�mero: ");
		scanf("%d", &numero2);
		fflush(stdin);
	}while(numero1 < 1 && numero2 < 1);
	
	if(numero1 > numero2){ 
		maiorNumero = numero1;
		menorNumero = numero2;
		}
		else{
			maiorNumero = numero2;
			menorNumero = numero1;
		}
	
			while(menorNumero <= maiorNumero){
				x=0;
				for(i=2; i <= menorNumero -1; i++){
					if(menorNumero%i ==0)
					x=1;
				}
				if(x==0)
					printf("\n%d", menorNumero);
			menorNumero++;
			}
		
	return 0;
}
