//Elabore um algoritmo que escreva o signo do zod�aco correspondente ao dia e m�s informado.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia, mes;
	
	printf("Saiba qual o seu signo\n");
	printf("Informe o dia em que voc� nasceu: \n");
		scanf("%d", &dia);
	printf("Informe o m�s: \n");
		scanf("%d", &mes);
		
	switch(mes){
		case 1:
			if(dia >= 1 && dia <= 20)
				printf("Capric�rnio");
			if(dia >= 20 && dia <= 31)
				printf("Aqu�rio");break;
				
		case 2:
			if(dia >= 1 && dia <= 19)
				printf("Aqu�rio");
			if(dia >= 20 && dia <= 28)
				printf("Peixes");break;
		
		case 3:
			if(dia >= 1 && dia <= 20)
				printf("Peixes");
			if(dia >= 21 && dia <= 31)
				printf("�ries");break;
		
		case 4:
			if(dia >= 1 && dia <= 20)
				printf("�ries");
			if(dia >= 21 && dia <= 30)
				printf("Touro");break;
		
		case 5:
			if(dia >= 1 && dia <= 20)
				printf("Touro");
			if(dia >= 21 && dia <= 31)
				printf("G�meos");break;
				
		case 6:
			if(dia >= 1 && dia <= 20)
				printf("G�meos");
			if(dia >= 21 && dia <= 30)
				printf("C�ncer");break;
		
		case 7:
			if(dia >= 1 && dia <= 21)
				printf("C�ncer");
			if(dia >= 22 && dia <= 31)
				printf("Le�o");break;
				
		case 8:
			if(dia >= 1 && dia <= 22)
				printf("Le�o");
			if(dia >= 23 && dia <= 31)
				printf("Virgem");break;
				
		case 9:
			if(dia >= 1 && dia <= 22)
				printf("Virgem");
			if(dia >= 23 && dia <= 30)
				printf("Libra");break;
		
		case 10:
			if(dia >= 1 && dia <= 22)
				printf("Libra");
			if(dia >= 23 && dia <= 31)
				printf("Escorpi�o");break;
		
		case 11:
			if(dia >= 1 && dia <= 21)
				printf("Escorpi�o");
			if(dia >= 22 && dia <= 30)
				printf("Sagit�rio");break;
				
		case 12:
			if(dia >= 1 && dia <= 21)
				printf("Sagit�rio");
			if(dia >= 22 && dia <= 31)
				printf("Capric�rnio");break;
		
		default: printf("Data inv�lida.");break;
	}
	
	return 0;
}
