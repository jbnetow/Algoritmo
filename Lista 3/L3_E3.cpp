/*Fa�a um algoritmo que apresenta a menor altura entre 10 pessoas, usando apenas a repeti��o 
enquanto.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");

	int menorAltura, contador, altura;

	contador = 1;
	
	while(contador<=10){
		printf("Informe a altura da %d� pessoa em cm: ", contador);
		scanf("%d", &altura);
		fflush(stdin);
			if(altura < 30){
				printf("Altura inv�lida! Favor informar a altura em cent�metros: ");
				scanf("%d", &altura);
				fflush(stdin);
			}
			else{
				if(contador == 1)
					menorAltura = altura;
				if(menorAltura > altura)
					menorAltura = altura;
			}
		contador++;
	}
	printf("\nA Menor Altura � %d cm\n",menorAltura);
	
	return 0;
}
