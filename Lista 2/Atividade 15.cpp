//Fa�a um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso � 
//Internet, para isso voc� dever� ler a quantidade de horas que voc� utilizou. Sabe-se que voc� 
//pagar� R$ 30,00 por at� 20 horas de uso (va1or b�sico), caso voc� tenha usado mais de 20 
//horas, ent�o voc� deve acrescentar 10% do valor b�sico para cada hora extra utilizada.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float horasU, valor1, pagar, extra;
	
	pagar = 30,00;
	
		printf("Por quantas horas voc� usou a internet? ");
			scanf("%f", &horasU);
			
		if(horasU <= 20 && horasU >= 0){
			printf("Voc� dever� pagar: R$%.2f",pagar);
		}
		else if(horasU <= 0){
			printf("Valor inv�lido");
		}
		else if(horasU > 20){
			extra = ((horasU-20)*3)+ pagar;
				printf("Voc� dever� pagar: R$%.2f", extra);
			
			
		}
		
		
	
	return 0;
}

