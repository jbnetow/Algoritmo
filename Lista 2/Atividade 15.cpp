//Faça um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso à 
//Internet, para isso você deverá ler a quantidade de horas que você utilizou. Sabe-se que você 
//pagará R$ 30,00 por até 20 horas de uso (va1or básico), caso você tenha usado mais de 20 
//horas, então você deve acrescentar 10% do valor básico para cada hora extra utilizada.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float horasU, valor1, pagar, extra;
	
	pagar = 30,00;
	
		printf("Por quantas horas você usou a internet? ");
			scanf("%f", &horasU);
			
		if(horasU <= 20 && horasU >= 0){
			printf("Você deverá pagar: R$%.2f",pagar);
		}
		else if(horasU <= 0){
			printf("Valor inválido");
		}
		else if(horasU > 20){
			extra = ((horasU-20)*3)+ pagar;
				printf("Você deverá pagar: R$%.2f", extra);
			
			
		}
		
		
	
	return 0;
}

